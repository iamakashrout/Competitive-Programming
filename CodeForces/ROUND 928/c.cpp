#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

ll sum(ll n){
    ll ans=0;
    while(n>0){
        ans+=(n%10);
        n/=10;
    }
    return ans;
}

void solve(vector<ll>& dp){
    ll n;
    cin>>n;
    cout<<dp[n]<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    ll n=2*1e5;
    vector<ll> dp(n+1, 0);
    for(ll i=1; i<=n; i++){
        dp[i]=dp[i-1]+sum(i);
    }
    while(t--){
        solve(dp);
    }
    return 0;
}