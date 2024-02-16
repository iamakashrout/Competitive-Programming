#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll k, x, a;
    cin>>k>>x>>a;
    if(x>=a){
        cout<<"NO"<<endl;
        return;
    }
    if(k>x+1){
        cout<<"YES"<<endl;
        return;
    }
    ll lost=0;
    for(ll i=0; i<=x; i++){
        ll bet=lost/(k-1)+1;
        lost+=bet;
        if(lost>a){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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