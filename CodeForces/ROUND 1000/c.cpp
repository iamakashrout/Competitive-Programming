#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    set<pair<ll, ll>> edges;
    vector<ll> degrees(n+1);
    for(ll i=0; i<n-1; i++){
        ll u, v;
        cin>>u>>v;
        edges.insert({u, v});
        edges.insert({v, u});
        degrees[u]++;
        degrees[v]++;
    }
    ll ans=0;
    vector<pair<ll, ll>> v;
    for(ll i=1; i<=n; i++){
        v.push_back({degrees[i], i});
    }
    sort(v.rbegin(), v.rend());
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(edges.find({v[i].second, v[j].second})==edges.end()){
                ans=max(ans, v[i].first+v[j].first-1);
                break;
            }
        }
    }
    for(auto e: edges){
        ans=max(ans, degrees[e.first]+degrees[e.second]-2);
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