#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, k;
    cin>>n>>k;
    if(n==1){
        cout<<k<<endl;
        return;
    }
    ll x=log2(k);
    ll y=pow(2, x);
    y--;
    cout<<y<<" ";
    cout<<k-y<<" ";
    for(ll i=0; i<n-2; i++){
        cout<<0<<" ";
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