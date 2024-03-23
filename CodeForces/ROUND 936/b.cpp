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
    ll mx=0;
    ll curr=0;
    ll sum=0;
    for(ll i=0; i<n; i++){
        if(curr<0){
            curr=0;
        }
        curr+=a[i];
        sum+=a[i];
        mx=max(mx, curr);
    }
    //cout<<mx<<endl;
    if(mx<=0){
        ll ans=(sum%mod+mod)%mod;
        cout<<ans<<endl;
        return;
    }
    ll ans=sum;
    while(k--){
        ans=((ans+mx)%mod+mod)%mod;
        mx=(mx+mx)%mod;
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