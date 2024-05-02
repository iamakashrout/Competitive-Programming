#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<string> v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    vector<string> freq(k);
    for(ll i=0; i<k; i++){
        string curr="1";
        for(ll j=0; j<i; j++){
            curr+='0';
        }
        freq[i]=curr;
    }
    map<string, ll> mp;
    for(ll i=0; i<n; i++){
        ll j=0;
        while(j<v[i].size() && v[i][j]=='0'){
            j++;
        }
        v[i]=v[i].substr(j);
        mp[v[i]]++;
    }
    for(ll i=0; i<k; i++){
        if(mp[freq[i]]==0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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