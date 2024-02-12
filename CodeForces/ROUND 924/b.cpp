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
    map<ll, ll> check;
    vector<ll> v;
    for(ll i=0; i<n; i++){
        if(check[a[i]]==0){
            v.push_back(a[i]);
            check[a[i]]=1;
        }
    }
    sort(v.begin(), v.end());
    ll j=0;
    ll curr=0;
    ll ans=0;
    for(ll i=0; i<v.size(); i++){
        while(j<v.size() && (v[j]-v[i])<=n-1){
            curr++;
            ans=max(ans, curr);
            j++;
        }
        curr--;
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