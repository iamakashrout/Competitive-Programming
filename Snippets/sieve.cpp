#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

ll num=1e6+1;
vector<bool> isPrime(num, true);

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
    }
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