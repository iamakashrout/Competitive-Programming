#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

vector<ll> solver(ll l, ll r, ll k){
    if(r-l+1<k){
        return {0, 0};
    }
    if(r-l+1==1){
        return {l, 1};
    }
    ll ans=0;
    ll size=0;
    ll mid=(l+r)/2;
    if((r-l+1)%2==1){
        ans+=mid;
        auto prev=solver(l, mid-1, k);
        ans+=2*prev[0];
        ans+=mid*prev[1];
        size+=2*prev[1]+1;
    }
    else{
        auto prev=solver(l, mid, k);
        ans+=2*prev[0];
        ans+=mid*prev[1];
        size+=2*prev[1];
    }
    return {ans, size};
}

void solve(){
    ll n, k;
    cin>>n>>k;
    ll ans=solver(1, n, k)[0];
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