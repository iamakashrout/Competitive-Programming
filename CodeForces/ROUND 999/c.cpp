#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=998244353;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    vector<vector<ll>> dp(n, vector<ll>(2));
    for(ll i=0; i<n; i++){
        cin>>a[i];
        dp[i][0]=dp[i][1]=0;
    }
    if(n==1){
        if(a[0]==0){
            cout<<2<<endl;
            return;
        }
        else{
            cout<<1<<endl;
            return;
        }
    }
    map<vector<ll>, ll> old;
    if(a[0]!=0){
        dp[1][1]=1;
        old[{1, 1}]=1;
    }
    else{
        dp[0][0] = 1;
        dp[1][1] = 1;
        old[{0, 0}] = 1;
        old[{1, 1}] = 1;
    }
    for(ll i=1; i<n; i++){
        map<vector<ll>, ll> New;
        New[{a[i], 0}]=(old[{a[i], 0}]+old[{a[i], 1}])%mod;
        New[{a[i-1]+1, 1}]=old[{a[i-1], 0}];
        old=New;
    }
    ll ans=(old[{a[n-2]+1, 1}]+old[{a[n-1], 0}])%mod;
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