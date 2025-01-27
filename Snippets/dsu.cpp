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