#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(2*n);
    for(ll i=0; i<2*n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    ll ans=0;
    for(ll i=0; i<2*n; i+=2){
        ans+=a[i];
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