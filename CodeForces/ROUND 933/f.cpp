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
    vector<ll> d(m);
    for(ll i=0; i<m; i++){
        cin>>d[i];
    }
    vector<ll> f(k);
    for(ll i=0; i<k; i++){
        cin>>f[i];
    }
    vector<pair<ll, ll>> diff(n-1);
    for(ll i=1; i<n; i++){
        diff[i-1].first=a[i]-a[i-1];
        diff[i-1].second=i;
    }
    sort(diff.begin(), diff.end());
    sort(d.begin(), d.end());
    sort(f.begin(), f.end());
    ll mx=diff[n-2].first;
    ll ind1=diff[n-2].second-1;
    ll ind2=diff[n-2].second;
    ll mx2=0;
    if(n>2){
        mx2=diff[n-3].first;
    }
    for(ll i=0; i<m; i++){
        ll low=a[ind1];
        ll high=a[ind2];
        ll mid=(low+high)/2;
        ll index=lower_bound(f.begin(), f.end(), mid-d[i])-f.begin();
        if(index<k){
            if(d[i]+f[index]>=low && d[i]+f[index]<=high){
                mx=min(mx, max(d[i]+f[index]-low, high-d[i]-f[index]));
            }
        }
        if(index>0){
            if(d[i]+f[index-1]>=low && d[i]+f[index-1]<=high){
                mx=min(mx, max(d[i]+f[index-1]-low, high-d[i]-f[index-1]));
            }
        }
    }
    cout<<max(mx, mx2)<<endl;
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