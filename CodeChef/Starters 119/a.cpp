#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1e9+7

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    ll ans=LONG_LONG_MAX;
    for(ll i=0; i<n; i++){
        if(a[i]>=k){
            ans=min(ans, a[i]%k);
        }
    }
    if(ans==LONG_LONG_MAX){
        cout<<-1<<endl;
        return;
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