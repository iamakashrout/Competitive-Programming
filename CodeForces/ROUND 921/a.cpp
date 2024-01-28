#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1e9+7

void solve(){
    ll n, k;
    cin>>n>>k;
    string ans="";
    for(ll i=0; i<n; i++){
        for(ll j=0; j<k; j++){
            ans+=('a'+j);
        }
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