#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    vector<ll> b(n);
    for(ll i=0; i<n; i++){
        cin>>b[i];
    }
    ll ans=1;
    for(ll i=n-1; i>=0; i--){
        if(b[i]>=ans){
            ans=0;
        }
        else if(a[i]+b[i]>=ans){
            ans-=b[i];
        }
        ans++;
    }
    cout<<ans-1<<endl;
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