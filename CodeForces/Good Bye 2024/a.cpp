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
    bool check=false;
    for(ll i=1; i<n; i++){
        ll mx=max(a[i], a[i-1]);
        ll mn=min(a[i], a[i-1]);
        if(mx<2*mn){
            check=true;
            break;
        }
    }
    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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