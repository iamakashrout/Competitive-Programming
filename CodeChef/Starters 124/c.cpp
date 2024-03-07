#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    string s;
    cin>>s;
    ll n=s.size();
    map<char, ll> mp;
    for(ll i=0; i<n; i++){
        mp[s[i]]++;
    }
    ll ans=1e6;
    for(ll j=0; j<26; j++){
        char c='a'+j;
        ll x=mp[c];
        if(x==0){
            continue;
        }
        ll count=0;
        for(ll i=0; i<n; i++){
            if(s[i]==c){
                count++;
            }
            if(i>=x){
                if(s[i-x]==c){
                    count--;
                }
            }
            if(i>=(x-1)){
                ans=min(ans, x-count);
            }
        }
    }
    cout<<ans<<endl;
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