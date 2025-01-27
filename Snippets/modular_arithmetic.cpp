#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

ll power(ll x, ll y){
    ll ans=1;
    x=x%mod;
    while(y>0){
        if(y%2==1){
            ans=(ans*x)%mod;
        }
        y=y/2;
        x=(x*x)%mod;
    }
    return ans;
}

ll modInverse(ll n){
    return power(n, mod-2);
}

vector<ll> factorial(1e6+5, 0);
void getFactorial(){
    factorial[0]=1;
    for(ll i=1; i<=1e6; i++){
        factorial[i]=(factorial[i-1]*i)%mod;
    }
}

ll nCr(ll n, ll r){
    if(n<r){
        return 0;
    }
    if(r==0){
        return 1;
    }
    return (((factorial[n]*modInverse(factorial[r])))%mod*(modInverse(factorial[n-r]))%mod)%mod;
}

void solve(){
    
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