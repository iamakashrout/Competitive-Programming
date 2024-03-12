#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, m, k, d;
    cin>>n>>m>>k>>d;
    vector<vector<ll>> v(n, vector<ll>(m));
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin>>v[i][j];
            v[i][j]++;
        }
    }
    if(d>=m){
        cout<<k*2<<endl;
        return;
    }
    vector<vector<ll>> dp(n, vector<ll>(m, INT_MAX));
    for(ll i=0; i<n; i++){
        deque<ll> dq;
        for(ll j=0; j<=d; j++){
            dp[i][j]=v[i][j]+(j!=0);
            while(!dq.empty() && dp[i][dq.back()]>=dp[i][j]){
                //cout<<dp[i][dq.back()]<<endl;
                dq.pop_back();
            }
            dq.push_back(j);
        }
        for(ll j=d+1; j<m; j++){
            dp[i][j]=dp[i][dq.front()]+v[i][j];
            while(!dq.empty() && dp[i][dq.back()]>=dp[i][j]){
                dq.pop_back();
            }
            while(!dq.empty() && j-dq.front()>=d+1){
                dq.pop_front();
            }
            dq.push_back(j);
        }
    }
    // for(ll i=0; i<n; i++){
    //     for(ll j=0; j<m; j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<ll> prefix(n, 0);
    prefix[0]=dp[0][m-1];
    for(ll i=1; i<n; i++){
        prefix[i]=prefix[i-1]+dp[i][m-1];
    }
    ll ans=prefix[k-1];
    for(ll i=k; i<n; i++){
        ans=min(ans, prefix[i]-prefix[i-k]);
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