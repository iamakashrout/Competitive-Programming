#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> a(2*n);
    for(ll i=0; i<2*n; i++){
        cin>>a[i];
    }
    vector<ll> first;
    map<ll, ll> mp1;
    vector<ll> f;
    for(ll i=0; i<n; i++){
        first.push_back(a[i]);
        mp1[a[i]]++;
        if(mp1[a[i]]==2){
            f.push_back(a[i]);
        }
    }
    vector<ll> second;
    map<ll, ll> mp2;
    vector<ll> s;
    for(ll i=n; i<2*n; i++){
        second.push_back(a[i]);
        mp2[a[i]]++;
        if(mp2[a[i]]==2){
            s.push_back(a[i]);
        }
    }
    vector<ll> common;
    for(auto it=mp2.begin(); it!=mp2.end(); it++){
        if(it->second==1){
            common.push_back(it->first);
        }
    }
    // for(ll i=0; i<f.size(); i++){
    //     cout<<f[i]<<" ";
    // }
    // cout<<endl;
    // for(ll i=0; i<s.size(); i++){
    //     cout<<s[i]<<" ";
    // }
    // cout<<endl;
    // for(ll i=0; i<common.size(); i++){
    //     cout<<common[i]<<" ";
    // }
    // cout<<endl;
    vector<ll> ans1;
    vector<ll> ans2;
    ll i=0;
    while(k>0 && i<f.size()){
        ans1.push_back(f[i]);
        ans1.push_back(f[i]);
        ans2.push_back(s[i]);
        ans2.push_back(s[i]);
        i++;
        k--;
    }
    i=0;
    while(i<common.size()-1 && k>0){
        ans1.push_back(common[i]);
        ans1.push_back(common[i+1]);
        ans2.push_back(common[i]);
        ans2.push_back(common[i+1]);
        i+=2;
        k--;
    }
    for(ll i=0; i<ans1.size(); i++){
        cout<<ans1[i]<<" ";
    }
    cout<<endl;
    for(ll i=0; i<ans2.size(); i++){
        cout<<ans2[i]<<" ";
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