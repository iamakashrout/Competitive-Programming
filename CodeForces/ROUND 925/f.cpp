#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<vector<ll>> a(k, vector<ll>(n));
    vector<vector<ll>> graph(n+1);
    for(ll i=0; i<k; i++){
        for(ll j=0; j<n; j++){
            cin>>a[i][j];
        }
        for(ll j=2; j<n; j++){
            graph[a[i][j-1]].push_back(a[i][j]);
        }
    }
    vector<ll> visited(n+1);
    vector<ll> currVis(n+1);
    bool cycle=false;
    function<void(ll)> dfs=[&](ll node){
        visited[node]=1;
        currVis[node]=1;
        for(ll i=0; i<graph[node].size(); i++){
            if(currVis[graph[node][i]]==1){
                cycle=true;
            }
            else if(visited[graph[node][i]]==0){
                dfs(graph[node][i]);
            }
        }
        currVis[node]=0;
    };
    for(ll i=1; i<=n; i++){
        if(visited[i]==0){
            dfs(i);
        }
    }
    if(cycle){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
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