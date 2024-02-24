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
    vector<ll> x(n);
    for(ll i=0; i<n; i++){
        cin>>x[i];
    }
    map<ll, ll> mp;
    for(ll i=0; i<n; i++){
        mp[abs(x[i])]+=a[i];
    }
    ll val=0;
    ll prev=0;
    for(auto it=mp.begin(); it!=mp.end(); it++){
        val+=(it->first-prev)*k;
        val-=(it->second);
        if(val<0){
            cout<<"NO"<<endl;
            return;
        }
        prev=it->first;
    }
    cout<<"YES"<<endl;
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