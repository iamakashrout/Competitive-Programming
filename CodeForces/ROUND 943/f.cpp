#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, q;
    cin>>n>>q;
    vector<ll> a(n+1);
    vector<ll> prefix(n+1, 0);
    map<ll, vector<ll>> mp;
    mp[0].push_back(0);
    for(ll i=1; i<=n; i++){
        cin>>a[i];
        prefix[i]=prefix[i-1]^a[i];
        mp[prefix[i]].push_back(i);
    }
    while(q--){
        ll l, r;
        cin>>l>>r;
        ll x=prefix[r]^prefix[l-1];
        if(x==0){
            cout<<"YES"<<endl;
            continue;
        }
        auto &v1=mp[prefix[r]];
        auto &v2=mp[prefix[l-1]];
        auto it1=lower_bound(v1.begin(), v1.end(), l);
        auto it2=lower_bound(v2.begin(), v2.end(), r);
        it2--;
        if(*it1<*it2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
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