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
    vector<ll> v;
    for(auto it=mp.begin(); it!=mp.end(); it++){
        v.push_back(it->second);
    }
    sort(v.rbegin(), v.rend());
    ll rem=n;
    for(ll i=0; i<v.size()-1; i++){
        if(v[i]<k){
            cout<<rem<<endl;
            return;
        }
        rem-=v[i];
        rem+=(k-1);
        v[i+1]+=(k-1);
    }
    if(v[v.size()-1]>=k){
        cout<<k-1<<endl;
    }
    else{
        cout<<v[v.size()-1]<<endl;
    }
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