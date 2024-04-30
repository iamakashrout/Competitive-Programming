#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> a(n+1);
    for(ll i=1; i<=n; i++){
        cin>>a[i];
    }
    vector<vector<ll>> dp(n+1, vector<ll>(k+1));
    for(ll i=1; i<=k; i++){
        dp[0][i]=1e18;
    }
    for(ll i=1; i<=n; i++){
        for(ll j=0; j<=k; j++){
            dp[i][j]=dp[i-1][j]+a[i];
        }
        for(ll val=1e9, j=0; j<=min(i-1, k); j++){
            val=min(val, a[i-j]);
            for(ll l=j; l<=k; l++){
                dp[i][l]=min(dp[i][l], dp[i-j-1][l-j]+(j+1)*val);
            }
        }
    }
    cout<<dp[n][min(n-1, k)]<<endl;
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