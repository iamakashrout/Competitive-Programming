#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, m;
    cin>>n>>m;
    string path;
    cin>>path;
    vector<vector<ll>> grid(n, vector<ll>(m));
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin>>grid[i][j];
        }
    }
    ll x=0, y=0;
    for(ll i=0; i<path.size(); i++){
        if(path[i]=='D'){
            ll row=0;
            for(ll j=0; j<m; j++){
                row+=grid[x][j];
            }
            grid[x][y]=-row;
            x++;
        }
        else{
            ll col=0;
            for(ll j=0; j<n; j++){
                col+=grid[j][y];
            }
            grid[x][y]=-col;
            y++;
        }
    }
    ll val=0;
    for(ll j=0; j<m; j++){
        val+=grid[x][j];
    }
    grid[x][y]=-val;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
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