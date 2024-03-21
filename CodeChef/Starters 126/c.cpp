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
    map<double, ll> mp;
    ll ans=0;
    for(ll i=0; i<n; i++){
        if(a[i]!=1){
            double x=(double)3*a[i]/(a[i]-1);
            ans+=mp[x];
        }
        mp[a[i]]++;
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