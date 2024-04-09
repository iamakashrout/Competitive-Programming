#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, m, k;
    cin>>n>>m>>k;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    vector<ll> b(m);
    map<ll, ll> mp;
    for(ll i=0; i<m; i++){
        cin>>b[i];
        mp[b[i]]++;
    }
    map<ll, ll> mp2;
    ll count=0;
    for(ll i=0; i<m; i++){
        if(mp[a[i]]>0){
            mp2[a[i]]++;
            if(mp2[a[i]]<=mp[a[i]]){
                count++;
            }
        }
    }
    ll ans=0;
    if(count>=k){
        ans++;
    }
    for(ll i=m; i<n; i++){
        if(mp[a[i]]>0){
            mp2[a[i]]++;
            if(mp2[a[i]]<=mp[a[i]]){
                count++;
            }
        }
        if(mp[a[i-m]]>0){
            mp2[a[i-m]]--;
            if(mp2[a[i-m]]<mp[a[i-m]]){
                count--;
            }
        }
        if(count>=k){
            ans++;
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