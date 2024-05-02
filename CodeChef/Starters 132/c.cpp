#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    vector<ll> even;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2==0){
            even.push_back(i);
        }
    }
    ll total=n*(n+1)/2;
    vector<ll> v;
    ll prev=-1;
    for(ll i=0; i<even.size(); i++){
        ll val=even[i]-prev-1;
        v.push_back(val);
        prev=even[i];
    }
    v.push_back(n-prev-1);
    sort(v.rbegin(), v.rend());
    ll ans=0;
    v[0]--;
    ll e=v[0]/2;
    ll f=(v[0]+1)/2;
    ans+=(e*(e+1)/2);
    ans+=(f*(f+1)/2);
    for(ll i=1; i<v.size(); i++){
        ans+=(v[i]*(v[i]+1)/2);
    }
    cout<<total-ans<<endl;
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