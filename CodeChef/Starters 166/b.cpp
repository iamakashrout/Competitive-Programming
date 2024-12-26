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
    vector<ll> b=a;
    sort(b.begin(), b.end());
    map<ll, ll> mp;
    for(ll i=0; i<n; i++){
        mp[b[i]]=i;
    }
    ll ans=n;
    ll prev=mp[a[0]];
    for(ll i=1; i<n; i++){
        if(abs(mp[a[i]]-prev)==1){
            ans--;
        }
        prev=mp[a[i]];
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