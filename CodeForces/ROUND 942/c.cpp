#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    ll count=a[0];
    ll prev=1;
    ll ind=-1;
    for(ll i=1; i<n; i++){
        if(a[i]>a[i-1]){
            if(prev*(a[i]-a[i-1])<=k){
                k-=prev*(a[i]-a[i-1]);
                count=a[i];
            }
            else{
                ll val=k/prev;
                k-=(val*prev);
                count+=val;
                ind=i;
                break;
            }
        }
        prev++;
    }
    ll num=count*n;
    if(ind!=-1 && ind<n && a[ind]>count){
        num+=(n-ind);
    }
    num+=k;
    ll perms=num-(n-1);
    cout<<perms<<endl;
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