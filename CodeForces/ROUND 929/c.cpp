#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll a, b, l;
    cin>>a>>b>>l;
    ll ans=0;
    map<ll, ll> mp;
    ll x=1;
    while(x<=l){
        ll y=x;
        while(y<=l){
            if(l%y==0){
                ll k=l/y;
                if(mp[k]==0){
                    ans++;
                }
                mp[k]++;
            }
            y*=b;
        }
        x*=a;
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