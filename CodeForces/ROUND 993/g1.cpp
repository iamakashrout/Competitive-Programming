#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> r(n);
    vector<vector<ll>> graph(n+1);
    vector<ll> inDegrees(n+1, 0);
    for(ll i=0; i<n; i++){
        cin>>r[i];
        graph[i+1].push_back(r[i]);
        inDegrees[r[i]]++;
    }
    queue<ll> q;
    for(ll i=1; i<=n; i++){
        if(inDegrees[i]==0){
            q.push(i);
        }
    }
    ll ans=2;
    if(q.size()==0){
        cout<<ans<<endl;
        return;
    }
    while(!q.empty()){
        ans++;
        ll sz=q.size();
        for(ll i=0; i<sz; i++){
            ll curr=q.front();
            q.pop();
            for(ll j=0; j<graph[curr].size(); j++){
                inDegrees[graph[curr][j]]--;
                if(inDegrees[graph[curr][j]]==0){
                    q.push(graph[curr][j]);
                }
            }
        }
        if(q.size()==0){
            cout<<ans<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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