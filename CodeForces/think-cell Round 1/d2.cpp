#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll> dp(n+1, 0);
    for(ll i=1; i<=n; i++){
        if(s[i-1]=='0'){
            dp[i]=dp[i-1];
        }
        else{
            ll index=max(0ll, i-3);
            dp[i]=dp[index]+i;
        }
    }
    ll ans=0;
    for(ll i=0; i<=n; i++){
        ans+=dp[i];
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