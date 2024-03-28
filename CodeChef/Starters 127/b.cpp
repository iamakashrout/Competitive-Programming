#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, l;
    cin>>n>>l;
    if(l>=1999){
        for(ll i=1; i<=n; i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else{
        ll count=0;
        ll curr=10000;
        while(count<n){
            cout<<curr<<" ";
            curr+=2000;
            count++;
        }
        cout<<endl;
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