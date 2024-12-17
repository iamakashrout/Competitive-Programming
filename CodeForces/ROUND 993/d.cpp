#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    vector<ll> v;
    map<ll, ll> mp;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        if(mp[a[i]]==0){
            v.push_back(a[i]);
        }
        mp[a[i]]++;
    }
    vector<ll> ans;
    for(ll i=0; i<v.size(); i++){
        ans.push_back(v[i]);
    }
    ll i=1;
    while(ans.size()<n){
        while(mp[i]>0){
            i++;
        }
        ans.push_back(i);
        i++;
    }
    for(ll i=0; i<n; i++){
        cout<<ans[i]<<" ";
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