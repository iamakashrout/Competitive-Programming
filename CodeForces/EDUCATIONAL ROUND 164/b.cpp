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
    vector<ll> temp=a;
    sort(temp.begin(), temp.end());
    if(temp[0]==temp[n-1]){
        cout<<-1<<endl;
        return;
    }
    map<ll, ll> mp;
    ll mx=0;
    ll val=0;
    for(ll i=0; i<n; i++){
        mp[a[i]]++;
        if(mp[a[i]]>mx){
            mx=mp[a[i]];
            val=a[i];
        }
    }
    vector<ll> ind;
    ind.push_back(-1);
    for(ll i=0; i<n; i++){
        if(a[i]!=val){
            ind.push_back(i);
        }
    }
    ind.push_back(n);
    ll ans=INT_MAX;
    for(ll i=1; i<ind.size()-1; i++){
        ll val1=ind[i]-ind[i-1]-1;
        ll val2=ind[i+1]-ind[i]-1;
        ans=min({ans, val1, val2});
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