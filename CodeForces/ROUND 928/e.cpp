#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, k;
    cin>>n>>k;
    ll start=1;
    ll diff=2;
    while(true){
        ll count=(n-start)/diff+1;
        if(count<k){
            k-=count;
        }
        else{
            ll ans=start+(k-1)*diff;
            cout<<ans<<endl;
            return;
        }
        start*=2;
        diff*=2;
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