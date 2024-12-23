#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, m, k;
    cin>>n>>m>>k;
    vector<ll> a(m);
    for(ll i=0; i<m; i++){
        cin>>a[i];
    }
    vector<ll> q(k);
    map<ll, ll> mp;
    for(ll i=0; i<k; i++){
        cin>>q[i];
        mp[q[i]]++;
    }
    if(mp.size()<n-1){
        for(ll i=0; i<m; i++){
            cout<<"0";
        }
        cout<<endl;
        return;
    }
    if(mp.size()==n){
        for(ll i=0; i<m; i++){
            cout<<"1";
        }
        cout<<endl;
        return;
    }
    for(ll i=0; i<m; i++){
        if(mp[a[i]]==0){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
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