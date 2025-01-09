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
    map<ll, ll> mp;
    mp[0]=n;
    ll x=0;
    vector<ll> prev(n, -1);
    for(ll i=n-1; i>=0; i--){
        x^=a[i];
        if(mp[x]){
            prev[i]=mp[x]-1;
        }
        mp[x]=i;
    }
    vector<ll> dp(n, 0);
    ll ans=0;
    for(ll i=n-1; i>=0; i--){
        dp[i]+=a[i];
        if(prev[i]!=-1){
            dp[i]+=dp[prev[i]];
        }
        ans=max(ans, dp[i]);
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