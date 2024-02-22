#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    vector<ll> a(22);
    vector<ll> b(22);
    ll ans=-1;
    ll points=0;
    for(ll i=0; i<22; i++){
        cin>>a[i]>>b[i];
        if(a[i]+b[i]*20>points){
            points=a[i]+b[i]*20;
            ans=i+1;
        }
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