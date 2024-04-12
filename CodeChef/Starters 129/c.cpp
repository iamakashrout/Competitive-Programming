#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll m, n;
    cin>>m>>n;
    vector<vector<ll>> v(n, vector<ll>(2));
    for(ll i=0; i<n; i++){
        cin>>v[i][0];
        v[i][0]--;
    }
    for(ll i=0; i<n; i++){
        cin>>v[i][1];
        v[i][1]--;
    }
    vector<ll> count(m, 0);
    ll y=0;
    for(auto x: v){
        ll start=x[0];
        ll end=x[1];
        ll e=end;
        if(end<start){
            e+=m;
        }
        if(e-start>=(m+1)/2){
            y++;
            continue;
        }
        if(start<=end){
            count[start]++;
            count[end]--;
        }
        else{
            count[start]++;
            count[0]++;
            count[end]--;
        }
    }
    for(int i=1; i<m; i++){
        count[i]+=count[i-1];
    }
    ll ans=0;
    for(ll i=0; i<m; i++){
        ans=max(ans, count[i]+count[(i+m/2)%m]);
        ans=max(ans, count[i]+count[(i+(m+1)/2)%m]);
    }
    cout<<ans+y<<endl;
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