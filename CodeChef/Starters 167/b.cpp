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
    ll x=a[0];
    sort(a.begin(), a.end());
    ll prev=lower_bound(a.begin(), a.end(), x)-a.begin();
    prev--;
    ll ans=0;
    if(prev<0){
        ans+=x;
    }
    else{
        ans+=(x-(x+a[prev]+1)/2+1);
    }
    ll next=upper_bound(a.begin(), a.end(), x)-a.begin();
    if(next>=n){
        ans+=(1e6-x);
    }
    else{
        ans+=((a[next]-x)/2);
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