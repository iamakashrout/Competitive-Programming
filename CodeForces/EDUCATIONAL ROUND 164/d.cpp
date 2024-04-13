#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=998244353;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    vector<vector<ll>> dp(5001, vector<ll>(5001, 0));
    dp[0][0]=1;
    ll ans=0;
    ll sum=0;
    for(ll i=1; i<=n; i++){
        for(ll j=0; j<=sum; j++){
            dp[i][j]=(dp[i][j]+dp[i-1][j])%mod;
            dp[i][j+a[i-1]]=(dp[i][j+a[i-1]]+dp[i-1][j])%mod;
        }
        for(ll j=0; j<=sum; j++){
            if(j<=a[i-1]){
                ans=(ans+dp[i-1][j]*a[i-1])%mod;
            }
            else{
                ans=(ans+dp[i-1][j]*((a[i-1]+j+1)/2))%mod;
            }
        }
        sum+=a[i-1];
    }
    cout<<ans%mod<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}