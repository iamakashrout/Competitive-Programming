#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> a(n);
    map<ll, ll> mp;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    ll ans=mp.size();
    vector<ll> v;
    for(auto it=mp.begin(); it!=mp.end(); it++){
        v.push_back(it->second);
    }
    sort(v.begin(), v.end());
    for(ll i=0; i<v.size()-1; i++){
        if(v[i]>k){
            break;
        }
        ans--;
        k-=v[i];
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