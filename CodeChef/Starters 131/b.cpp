#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    vector<ll> rem;
    for(ll i=0; i<n; i++){
        rem.push_back(a[i]%k);
    }
    sort(rem.begin(), rem.end());
    ll ans=rem[n-1]-rem[0];
    for(ll i=0; i<n-1; i++){
        ll rev=k-(rem[i+1]-rem[i]);
        ans=min(ans, rev);
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