#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

ll num=1e6+1;
vector<bool> isPrime(num, true);
vector<ll> primeNums;

void checkPrimes(){
    isPrime[0]=false;
    isPrime[1]=false;
    for(ll i=2; i<num; i++){
        if(isPrime[i]==false){
            continue;
        }
        for(ll j=i*i; j<num; j+=i){
            isPrime[j]=false;
        }
        if(isPrime[i]==true){
            primeNums.push_back(i);
        }
    }
}

void primes(map<ll, ll>& mp, ll curr){
    ll x=curr;
    for(ll i=0; primeNums[i]*primeNums[i]<=x; i++){
        ll count=0;
        while(curr%primeNums[i]==0){
            count++;
            curr/=primeNums[i];
        }
        mp[primeNums[i]]+=count;
    }
    if(curr>1){
        mp[curr]++;
    }
}

void solve(){
    ll n, m;
    cin>>n>>m;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    map<ll, ll> mp;
    for(ll j=2; j<=m; j++){
        primes(mp, j);
    }
    for(ll j=0; j<n; j++){
        map<ll, ll> mp2=mp;
        primes(mp2, a[j]);
        ll ans=1;
        for(auto it=mp2.begin(); it!=mp2.end(); it++){
            ans=((ans%mod)*(((it->second)+1)%mod))%mod;
        }
        cout<<ans%mod<<" ";
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    checkPrimes();
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}