#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, x, y;
    cin>>n>>x>>y;
    vector<ll> a(n);
    ll sum=0;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.begin(), a.end());
    ll X=sum-x; // big
    ll Y=sum-y; // small
    ll ans=0;
    for(ll i=0; i<n-1; i++){
        ll val1=Y-a[i];
        ll ind1=lower_bound(a.begin()+i+1, a.end(), val1)-a.begin();
        ll val2=X-a[i];
        ll ind2=upper_bound(a.begin()+i+1, a.end(), val2)-a.begin()-1;
        if(ind1<=ind2){
            ans+=(ind2-ind1+1);
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