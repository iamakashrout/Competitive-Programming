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
    sort(a.begin(), a.end());
    map<ll, ll> mp;
    for(ll i=0; i<n; i++){
        mp[a[i]]++;
    }
    ll mx=-1;
    for(auto it=mp.begin(); it!=mp.end(); it++){
        if(it->second>=2){
            mx=max(mx, it->first);
        }
    }
    if(mx==-1){
        cout<<-1<<endl;
        return;
    }
    if(mp[mx]>=4){
        cout<<mx<<" "<<mx<<" "<<mx<<" "<<mx<<endl;
        return;
    }
    ll diff=INT_MAX;
    vector<ll> v;
    ll count=0;
    for(ll i=0; i<n; i++){
        if(count<2 && a[i]==mx){
            count++;
            continue;
        }
        v.push_back(a[i]);
    }
    for(ll i=1; i<v.size(); i++){
        diff=min(diff, v[i]-v[i-1]);
    }
    ll x, y;
    for(ll i=1; i<v.size(); i++){
        if(v[i]-v[i-1]==diff){
            x=v[i];
            y=v[i-1];
            break;
        }
    }
    ll base=abs(x-y);
    ll cond=2*mx-base;
    if(cond>0){
        cout<<mx<<" "<<mx<<" "<<x<<" "<<y<<endl;
    }
    else{
        cout<<-1<<endl;
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