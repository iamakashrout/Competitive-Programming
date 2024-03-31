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
    map<ll, ll> mp;
    ll curr=0;
    vector<ll> ans;
    for(ll i=0; i<n; i++){
        if(a[i]>0){
            ans.push_back(curr);
            mp[curr]++;
            while(mp[curr]>0){
                curr++;
            }
        }
        else{
            ans.push_back(curr-a[i]);
            mp[curr-a[i]]++;
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