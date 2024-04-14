#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    ll sum=0;
    ll count=1;
    for(ll i=1; i<=n; i++){
        sum+=(i*count);
        count+=2;
    }
    ll moves=2*n;
    cout<<sum<<" "<<moves<<endl;
    for(ll i=n; i>=1; i--){
        cout<<2<<" "<<i<<" ";
        for(ll j=1; j<=n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
        cout<<1<<" "<<i<<" ";
        for(ll j=1; j<=n; j++){
            cout<<j<<" ";
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