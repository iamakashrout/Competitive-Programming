#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<string> g(n);
    vector<string> w(n);
    for(ll i=0; i<n; i++){
        cin>>g[i]>>w[i];
    }
    vector<vector<ll>> possible(n, vector<ll>(n, 0));
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            possible[i][j]=(g[i]==g[j] || w[i]==w[j]);
        }
    }
    vector<vector<ll>> dp(1<<n, vector<ll>(n, 0));
    for(ll i=0; i<n; i++){
        dp[(1<<i)][i]=1;
    }
    ll ans=0;
    for(ll i=1; i<(1<<n); i++){
        for(ll j=0; j<n; j++){
            if(dp[i][j]){
                ans=max(ans, (ll)__builtin_popcount(i));
                for(ll k=0; k<n; k++){
                    if(!((i>>k)&1) && possible[j][k]){
                        dp[i|(1<<k)][k]=1;
                    }
                }
            }
        }
    }
    cout<<n-ans<<endl;
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