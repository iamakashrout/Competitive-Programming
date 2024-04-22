#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, k;
    cin>>n>>k;
    ll taken=0;
    for(ll i=0; i<k; i++){
        ll a, b;
        cin>>a>>b;
        if(a==b){
            taken++;
        }
        else{
            taken+=2;
        }
    }
    ll left=n-taken;
    vector<ll> dp(left+1, 1);
    for(ll i=2; i<=left; i++){
        dp[i]=(dp[i-1]+(2*(i-1)*dp[i-2])%mod)%mod;
    }
    cout<<dp[left]<<endl;
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