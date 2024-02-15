#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

ll num=1e6+1;
vector<bool> isPrime(num, true);
vector<ll> primes;

void checkPrimes(){
    isPrime[0]=false;
    isPrime[1]=false;
    for(ll i=2; i<num; i++){
        if(isPrime[i]==false){
            continue;
        }
        primes.push_back(i);
        for(ll j=i*i; j<num; j+=i){
            isPrime[j]=false;
        }
    }
}

void solve(){
    ll n;
    cin>>n;
    if(n%2==1){
        cout<<1<<" ";
        n--;
    }
    ll i=0;
    while(n>0){
        cout<<primes[i]<<" "<<primes[i]<<" ";
        i++;
        n-=2;
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    checkPrimes();
    while(t--){
        solve();
    }
    return 0;
}