#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1e9+7

void solve(){
    ll n, k;
    cin>>n>>k;
    ll x=n/k;
    for(ll i=0; i<k; i++){
        cout<<x<<" ";
        x+=(n/k);
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