#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, m, k;
    cin>>n>>m>>k;
    vector<vector<ll>> grid(n+1, vector<ll>(m, 0));
    for(ll i=1; i<=n; i++){
        for(ll j=0; j<m; j++){
            cin>>grid[i][j];
        }
    }
    vector<vector<ll>> dp(n+1, vector<ll>(m, 1e18));
    dp[0][0]=0;
    for(ll i=1; i<=n; i++){
        for(ll shift=0; shift<m; shift++){
            vector<ll> temp(m, 1e18);
            for(ll j=0; j<m; j++){
                temp[j]=dp[i-1][j]+grid[i][(j+shift)%m]+k*shift;
            }
            for(ll j=0; j<m; j++){
                temp[j]=min(temp[j], temp[(j+m-1)%m]+grid[i][(j+shift)%m]);
            }
            for(ll j=0; j<m; j++){
                dp[i][j]=min(dp[i][j], temp[j]);
            }
        }
    }
    cout<<dp[n][m-1]<<endl;
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