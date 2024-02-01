#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

vector<bool> sieve(1e6, true);
vector<ll> primes;
void createSieve(){
    for(ll i=2; i<sieve.size(); i++){
        if(sieve[i]==true){
            primes.push_back(i);
            for(ll j=i*i; j<sieve.size(); j+=i){
                sieve[j]=false;
            }
        }
    }
}

void solve(){
    ll x, q;
    cin>>x>>q;
    vector<ll> powers;
    ll temp=x;
    for(ll i=0; i<primes.size(); i++){
        ll count=0;
        while(temp%primes[i]==0){
            temp=temp/primes[i];
            count++;
        }
        if(count>0){
            powers.push_back(count);
        }
    }
    // for(ll i=0; i<powers.size(); i++){
    //     cout<<powers[i]<<endl;
    // }
    while(q--){
        ll p;
        cin>>p;
        if(p==1){
            cout<<1<<endl;
        }
        else{
            ll ans=1;
            for(ll i=0; i<powers.size(); i++){
                if(powers[i]%p==0){
                    ans=(ans*2)%mod;
                }
            }
            cout<<ans<<endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    createSieve();
    while(t--){
        solve();
    }
    return 0;
}