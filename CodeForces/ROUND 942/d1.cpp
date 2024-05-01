#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, m;
    cin>>n>>m;
    ll ans=n;
    for(ll i=2; i<=m; i++){
        ll start=i*i-i;
        if(start>n){
            continue;
        }
        ll val=(n-start+i*i)/(i*i);
        ans+=val;
    }
    cout<<ans<<endl;
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