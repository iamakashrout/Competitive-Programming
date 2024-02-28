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
    if(a[0]!=a[1]){
        cout<<"YES"<<endl;
        return;
    }
    map<ll, ll> mp;
    for(ll i=0; i<n; i++){
        mp[a[i]]++;
    }
    for(auto it=mp.begin(); it!=mp.end(); it++){
        if(it->first%a[0]!=0){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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