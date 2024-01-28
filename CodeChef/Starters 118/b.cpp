#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1e9+7

void solve(){
    ll n, m;
    cin>>n>>m;
    vector<ll> states(n);
    for(ll i=0; i<n; i++){
        cin>>states[i];
    }
    ll prev=0;
    ll ans=0;
    for(ll i=0; i<n; i++){
        if(states[i]<m){
            prev+=states[i];
            if(prev>=m){
                ans++;
                prev=0;
            }
        }
        else{
            ans++;
            prev=0;
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