#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, x, y;
    cin>>n>>x>>y;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    map<ll, vector<ll>> diff;
    for(ll i=0; i<n; i++){
        ll p=a[i]%y;
        diff[p].push_back(a[i]);
    }
    ll ans=0;
    for(auto it=diff.begin(); it!=diff.end(); it++){
        vector<ll> v=it->second;
        map<ll, ll> count;
        for(ll i=0; i<v.size(); i++){
            ll p=v[i]%x;
            if(p==0){
                ans+=count[0];
            }
            else{
                ans+=count[x-p];
            }
            count[p]++;
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