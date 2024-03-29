#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll> factors;
    for(ll i=1; i<=n; i++){
        if(n%i==0){
            ll count1=0;
            for(ll j=0; j<i; j++){
                for(ll k=j+i; k<n; k+=i){
                    if(s[j]!=s[k]){
                        count1++;
                    }
                }
            }
            if(count1<=1){
                cout<<i<<endl;
                return;
            }
            ll count2=0;
            for(ll j=n-i; j<n; j++){
                for(ll k=j-i; k>=0; k-=i){
                    if(s[j]!=s[k]){
                        count2++;
                    }
                }
            }
            if(count2<=1){
                cout<<i<<endl;
                return;
            }
        }
    }
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