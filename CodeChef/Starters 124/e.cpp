#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;
const ll m=998244353;

ll pow_mod(ll x, ll y){
    if(y==0){
        return 1;
    }
    ll prev=pow_mod(x, y/2);
    if(y%2==1){
        return ((((prev%m)*(prev%m))%m)*(x%m))%m;
    }
    else{
        return ((prev%m)*(prev%m))%m;
    }
}

void solve(){
    ll n, x;
    cin>>n>>x;
    ll ox=x;
    vector<ll> factors;
    ll total=0;
    for(ll j=2; j*j<=x; j++){
        if(x%j!=0){
            continue;
        }
        ll curr=0;
        while(x%j==0){
            curr++;
            x=x/j;
        }
        factors.push_back(curr);
        total+=curr;
    }
    if(x>1){
        factors.push_back(1);
        total++;
    }
    ll ans=0;
    for(ll i=1; i<=n; i++){
        ll curr=1;
        for(ll j=0; j<factors.size(); j++){
            ll p=((pow_mod(factors[j]+1, i))%m-(pow_mod(factors[j], i))%m+m)%m;
            curr=((curr%m)*(p%m))%m;
        }
        ans=(ans%m+curr%m)%m;
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