#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    for(ll i=1; i<=n; i++){
        for(ll j=i+1; j<=n; j++){
            if(a[i-1]==j && a[j-1]==i){
                cout<<2<<endl;
                return;
            }
        }
    }
    cout<<3<<endl;
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