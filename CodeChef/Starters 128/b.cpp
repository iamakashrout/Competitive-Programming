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
    vector<ll> v;
    for(ll i=1; i<n; i++){
        if(a[i]<a[i-1]){
            v.push_back(i);
        }
    }
    for(ll i=1; i<v.size(); i++){
        if(v[i]==v[i-1]){
            cout<<"No"<<endl;
            return;
        }
    }
    ll mx=0;
    for(ll i=0; i<v.size(); i++){
        mx=max(mx, a[v[i]-1]-a[v[i]]);
    }
    for(ll i=0; i<v.size(); i++){
        a[v[i]]+=mx;
    }
    for(ll i=1; i<n; i++){
        if(a[i]<a[i-1]){
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
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