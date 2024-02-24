#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n+1, 0);
    vector<ll> prefix(n+1, 0);
    vector<ll> count(n+1, 0);
    vector<ll> ans(n+1, INT_MAX);
    for(ll i=1; i<=n; i++){
        cin>>a[i];
        prefix[i]=prefix[i-1]+a[i];
        if(a[i]!=a[i-1]){
            count[i]=count[i-1]+1;
        }
        else{
            count[i]=count[i-1];
        }
    }
    for(ll i=1; i<=n; i++){
        if(i>1 && a[i-1]>a[i]){
            ans[i]=1;
        }
        if(i<n && a[i+1]>a[i]){
            ans[i]=1;
        }
        ll l=1, r=i-1;
        while(l<=r){
            ll mid=(l+r)/2;
            if((prefix[i-1]-prefix[mid-1]>a[i]) && (mid==(i-1) || count[i-1]>count[mid])){
                ans[i]=min(ans[i], i-mid);
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        l=i+1, r=n;
        while(l<=r){
            ll mid=(l+r)/2;
            if((prefix[mid]-prefix[i]>a[i]) && (mid==(i+1) || count[mid]>count[i+1])){
                ans[i]=min(ans[i], mid-i);
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
    }
    for(ll i=1; i<=n; i++){
        if(ans[i]==INT_MAX){
            cout<<-1<<" ";
        }
        else{
            cout<<ans[i]<<" ";
        }
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}