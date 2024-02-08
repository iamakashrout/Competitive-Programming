#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(2*n);
    vector<ll> ans;
    map<ll, bool> mp;
    for(ll i=0; i<2*n; i++){
        cin>>a[i];
        if(!mp[a[i]]){
            ans.push_back(a[i]);
            mp[a[i]]=true;
        }
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