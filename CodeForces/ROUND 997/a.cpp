#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, m;
    cin>>n>>m;
    ll X=2*m;
    ll Y=2*m;
    for(ll i=0; i<n; i++){
        ll x, y;
        cin>>x>>y;
        if(i==0){
            continue;
        }
        X+=x;
        X-=(m-x);
        X+=m;
        Y+=y;
        Y-=(m-y);
        Y+=m;
    }
    cout<<X+Y<<endl;
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