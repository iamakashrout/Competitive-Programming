#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

class DisjointSet{
    public:
    vector<ll> rank, parent, size;

    DisjointSet(ll n){
        rank.resize(n+1, 0);
        parent.resize(n+1);
        size.resize(n+1, 1);
        for(ll i=1; i<=n; i++){
            parent[i]=i;
        }
    }

    ll findParent(ll x){
        if(parent[x]==x){
            return x;
        }
        parent[x]=findParent(parent[x]);
        return parent[x];
    }

    void unionByRank(ll x, ll y){
        ll parentX=findParent(x);
        ll parentY=findParent(y);
        if(parentX==parentY){
            return;
        }
        if(rank[parentX]<rank[parentY]){
            parent[parentX]=parentY;
        }
        else if(rank[parentX]>rank[parentY]){
            parent[parentY]=parentX;
        }
        else{
            parent[parentX]=parentY;
            rank[parentY]++;
        }
    }

    void unionBySize(ll x, ll y){
        ll parentX=findParent(x);
        ll parentY=findParent(y);
        if(parentX==parentY){
            return;
        }
        if(size[parentX]<size[parentY]){
            parent[parentX]=parentY;
            size[parentY]+=size[parentX];
        }
        else{
            parent[parentY]=parentX;
            size[parentX]+=size[parentY];
        }
    }
};

void solve(){
    ll n, m1, m2;
    cin>>n>>m1>>m2;
    vector<vector<ll>> F(n+1);
    for(ll i=0; i<m1; i++){
        ll u, v;
        cin>>u>>v;
        F[u].push_back(v);
        F[v].push_back(u);
    }
    vector<vector<ll>> G(n+1);
    for(ll i=0; i<m2; i++){
        ll u, v;
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    DisjointSet gdsu(n);
    for(ll i=1; i<=n; i++){
        for(ll j=0; j<G[i].size(); j++){
            gdsu.unionBySize(i, G[i][j]);
        }
    }
    ll ans=0;
    DisjointSet fdsu(n);
    for(ll i=1; i<=n; i++){
        for(ll j=0; j<F[i].size(); j++){
            if(gdsu.findParent(i)!=gdsu.findParent(F[i][j])){
                if(F[i][j]>i){
                    ans++;
                }
            }
            else{
                fdsu.unionBySize(i, F[i][j]);
            }
        }
    }
    map<ll, ll> gMap;
    for(ll i=1; i<=n; i++){
        ll p=gdsu.findParent(i);
        gMap[p]++;
    }
    map<ll, ll> fMap;
    for(ll i=1; i<=n; i++){
        ll p=fdsu.findParent(i);
        fMap[p]++;
    }
    ans+=(fMap.size()-gMap.size());
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