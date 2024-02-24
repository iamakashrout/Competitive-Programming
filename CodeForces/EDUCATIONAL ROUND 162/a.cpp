#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    ll i=0;
    while(i<n && a[i]==0){
        i++;
    }
    while(i<n && a[i]==1){
        i++;
    }
    ll ans=0;
    while(i<n){
        ll zeros=0;
        while(i<n&& a[i]==0){
            zeros++;
            i++;
        }
        ll ones=0;
        while(i<n && a[i]==1){
            ones++;
            i++;
        }
        if(ones==0){
            break;
        }
        if(zeros<=ones){
            ans+=zeros;
        }
        else{
            ans+=zeros;
        }
    }
    cout<<ans<<endl;
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