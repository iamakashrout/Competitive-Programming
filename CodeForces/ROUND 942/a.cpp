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
    ll i=n-1;
    ll j=n-1;
    ll ans=0;
    while(i>=0){
        if(a[i]<=b[j]){
            i--;
            j--;
        }
        else{
            i--;
            ans++;
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