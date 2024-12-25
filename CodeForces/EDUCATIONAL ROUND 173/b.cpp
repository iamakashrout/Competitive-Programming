#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, d;
    cin>>n>>d;
    map<ll, ll> mp;
    mp[1]=1;
    if(d%3==0 || n>=3){
        mp[3]=1;
    }
    if(d==5){
        mp[5]=1;
    }
    if(d==9 || n>=6 || ((d==3 || d==6) && n>=3)){
        mp[9]=1;
    }
    if(d==7 || (n>=3)){
        mp[7]=1;
    }
    for(auto it=mp.begin(); it!=mp.end(); it++){
        if(it->second>0){
            cout<<it->first<<" ";
        }
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