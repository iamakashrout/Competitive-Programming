#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

vector<ll> sol={0, 1, 2, 1, 2, 3, 1, 2, 3, 2, 1, 2, 2, 2, 3};

void solve(){
    ll n;
    cin>>n;
    if(n<15){
        cout<<sol[n]<<endl;
    }
    else if(n%15==0){
        cout<<n/15<<endl;
    }
    else if(n%15==5){
        cout<<n/15-1+2<<endl;
    }
    else if(n%15==8){
        cout<<n/15-1+3<<endl;
    }
    else{
        cout<<n/15+sol[n%15]<<endl;
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