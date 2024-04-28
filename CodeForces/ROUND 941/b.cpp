#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, m;
    cin>>n>>m;
    vector<vector<char>> grid(n, vector<char>(m));
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin>>grid[i][j];
        }
    }
    if(grid[0][0]==grid[n-1][m-1]){
        cout<<"YES"<<endl;
        return;
    }
    if(n==1 && grid[0][0]!=grid[0][m-1]){
        cout<<"NO"<<endl;
        return;
    }
    if(m==1 && grid[0][0]!=grid[n-1][0]){
        cout<<"NO"<<endl;
        return;
    }
    bool check1=true;
    for(ll i=1; i<m; i++){
        if(grid[0][i]!=grid[0][i-1]){
            check1=false;
            break;
        }
    }
    for(ll i=1; i<m; i++){
        if(grid[n-1][i]!=grid[n-1][i-1]){
            check1=false;
            break;
        }
    }
    if(grid[0][0]!=grid[n-1][0] && check1){
        cout<<"NO"<<endl;
        return;
    }
    bool check2=true;
    for(ll i=1; i<n; i++){
        if(grid[i][0]!=grid[i-1][0]){
            check2=false;
            break;
        }
    }
    for(ll i=1; i<n; i++){
        if(grid[i][m-1]!=grid[i-1][m-1]){
            check2=false;
            break;
        }
    }
    if(grid[0][0]!=grid[0][m-1] && check2){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
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