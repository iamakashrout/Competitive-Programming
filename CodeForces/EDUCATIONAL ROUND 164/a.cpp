#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, m, k;
    cin>>n>>m>>k;
    if(n<=k){
        cout<<"NO"<<endl;
        return;
    }
    ll div=(n+m-1)/m;
    if(k>=n-div){
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