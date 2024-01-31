#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1e9+7

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    vector<ll> b(n);
    for(ll i=0; i<n; i++){
        cin>>b[i];
    }
    vector<pair<ll, ll>> v(n);
    for(ll i=0; i<n; i++){
        v[i].first=a[i];
        v[i].second=b[i];
    }
    sort(v.begin(), v.end());
    for(ll i=0; i<n; i++){
        cout<<v[i].first<<" ";
    }
    cout<<endl;
    for(ll i=0; i<n; i++){
        cout<<v[i].second<<" ";
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