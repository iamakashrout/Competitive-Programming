#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    map<ll, ll> mp;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    vector<ll> v;
    for(auto it=mp.begin(); it!=mp.end(); it++){
        v.push_back(it->first);
    }
    sort(v.begin(), v.end());
    n=v.size();
    ll mex=n+1;
    for(ll i=1; i<=n; i++){
        if(mp[i]==0){
            mex=i;
            break;
        }
    }
    if(mex>n){
        if(n%2==1){
            cout<<"Alice"<<endl;
            return;
        }
        else{
            cout<<"Bob"<<endl;
            return;
        }
    }
    for(ll i=0; i<n; i++){
        if(v[i]>mex){
            if(i%2==0){
                cout<<"Alice"<<endl;
            }
            else{
                cout<<"Bob"<<endl;
            }
            return;
        }
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