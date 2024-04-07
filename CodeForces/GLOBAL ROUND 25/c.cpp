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
    ll num=(k+m-1)/m;
    vector<pair<ll, ll>> v;
    for(ll i=0; i<n; i++){
        v.push_back({a[i], i});
    }
    sort(v.begin(), v.end());
    vector<pair<ll, ll>> v1;
    for(ll i=0; i<num; i++){
        v1.push_back(v[i]);
    }
    sort(v1.begin(), v1.end(), [](pair<ll, ll>& a, pair<ll, ll>& b){
        return a.second<b.second;
    });
    ll mx=LONG_LONG_MIN;
    ll index=-1;
    for(ll i=0; i<num; i++){
        if(v1[i].first>mx){
            mx=v1[i].first;
            index=i;
        }
    }
    ll val=0;
    ll ans=0;
    for(ll i=0; i<num; i++){
        if(v1[i].first==mx && i==index){
            if(k%m!=0){
                ans+=((k%m)*(v1[i].first+val));
                val+=(k%m);
            }
            else{
                ans+=(m*(v1[i].first+val));
                val+=m;
            }
        }
        else{
            ans+=(m*(v1[i].first+val));
            val+=m;
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