#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    string s;
    cin>>s;
    ll n=s.size();
    ll ans=0;
    vector<ll> v(n);
    for(ll len=1; len*2<=n; len++){
        for(ll i=0; i<n; i++){
            v[i]=0;
        }
        for(ll i=0; i+len<n; i++){
            v[i]=(s[i]==s[i+len] || s[i]=='?' || s[i+len]=='?');
        }
        for(ll i=1; i<n; i++){
            v[i]+=v[i-1];
        }
        if(v[len-1]==len){
            ans=max(ans, len*2);
        }
        for(ll i=len; i<n; i++){
            if(v[i]-v[i-len]==len){
                ans=max(ans, len*2);
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