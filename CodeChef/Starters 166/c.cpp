#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void dfs(vector<ll>& p, ll& i, vector<ll>& visited, ll& mark){
    if(visited[i]!=0){
        return;
    }
    visited[i]=mark;
    dfs(p, p[i], visited, mark);
}

void solve(){
    ll n;
    cin>>n;
    vector<ll> p(n+1);
    for(ll i=1; i<=n; i++){
        cin>>p[i];
    }
    vector<ll> visited(n+1, 0);
    ll mark=1;
    for(ll i=1; i<=n; i++){
        if(visited[i]==0){
            dfs(p, i, visited, mark);
            mark++;
        }
    }
    // for(ll i=1; i<=n; i++){
    //     cout<<visited[i]<<" ";
    // }
    // cout<<endl;
    vector<ll> marked(n+1, 0);
    for(ll i=1; i<=n; i++){
        marked[visited[i]]++;
    }
    // for(ll i=1; i<=n; i++){
    //     cout<<marked[i]<<" ";
    // }
    // cout<<endl;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for(ll i=1; i<=n; i++){
        if(marked[i]>0){
            pq.push(marked[i]);
        }
    }
    ll ans=0;
    while(pq.size()>1){
        ll top1=pq.top();
        pq.pop();
        ll top2=pq.top();
        pq.pop();
        ans+=(top1+top2);
        pq.push(top1+top2);
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