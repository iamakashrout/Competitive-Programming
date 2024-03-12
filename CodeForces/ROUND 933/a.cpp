#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, m, k;
    cin>>n>>m>>k;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    vector<ll> b(m);
    for(ll i=0; i<m; i++){
        cin>>b[i];
    }
    ll ans=0;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            if(a[i]+b[j]<=k){
                ans++;
            }
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