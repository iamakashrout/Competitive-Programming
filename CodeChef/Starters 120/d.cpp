#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

ll power(ll a, ll x){
    if(x==0){
        return 1;
    }
    if(x%2==0){
        return (power(a, x/2)*power(a, x/2))%998244353;
    }
    else{
        return (((power(a, x/2)*power(a, x/2))%998244353)*a)%998244353;
    }
}

void solve(){
    ll n, k;
    cin>>n>>k;
    ll x=power(2, n-1);
    ll y=power(x, k);
    cout<<y<<endl;
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