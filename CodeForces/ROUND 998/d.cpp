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
    for(ll i=1; i<n; i++){
        if(a[i]<a[i-1]){
            cout<<"NO"<<endl;
            return;
        }
        ll prev=a[i-1];
        a[i-1]-=prev;
        a[i]-=prev;
    }
    cout<<"YES"<<endl;
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