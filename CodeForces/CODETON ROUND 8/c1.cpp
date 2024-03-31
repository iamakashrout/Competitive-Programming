#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, x, y;
    cin>>n>>x>>y;
    vector<ll> a(x);
    for(ll i=0; i<x; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    ll triangle=x-2;
    for(ll i=0; i<x-1; i++){
        if(a[i+1]==a[i]+2){
            triangle++;
        }
    }
    if(a.size()>=2 && ((a[x-1]==n-1 && a[0]==1) || (a[x-1]==n && a[0]==2))){
        triangle++;
    }
    cout<<triangle<<endl;
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