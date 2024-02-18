#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    ll i=n;
    ll j=1;
    if(n%2==1){
        j=2;
    }
    for(ll k=0; k<n; k++){
        if(k%2==0){
            cout<<i<<" ";
            i-=2;
        }
        else{
            cout<<j<<" ";
            j+=2;
        }
    }
    cout<<endl;
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