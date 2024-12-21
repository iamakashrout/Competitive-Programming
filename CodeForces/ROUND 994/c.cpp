#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, x, y;
    cin>>n>>x>>y;
    vector<vector<ll>> friends(n+1);
    for(ll i=1; i<=n; i++){
        if(i==1){
            friends[i]={2, n};
        }
        else if(i==n){
            friends[i]={1, n-1};
        }
        else{
            friends[i]={i-1, i+1};
        }
    }
    friends[x].push_back(y);
    friends[y].push_back(x);
    vector<ll> ans(n+1, -1);
    for(ll i=1; i<=n; i++){
        ll mex=0;
        vector<ll> temp;
        for(ll j=0; j<friends[i].size(); j++){
            temp.push_back(ans[friends[i][j]]);
        }
        sort(temp.begin(), temp.end());
        for(ll j=0; j<temp.size(); j++){
            if(temp[j]==mex){
                mex++;
            }
            else if(temp[j]>mex){
                break;
            }
        }
        ans[i]=mex;
    }
    for(ll i=1; i<=n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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