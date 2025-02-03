#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    if(k==n){
        ll curr=1;
        for(ll i=1; i<n; i+=2){
            if(a[i]!=curr){
                cout<<curr<<endl;
                return;
            }
            curr++;
        }
        cout<<curr<<endl;
        return;
    }
    for(ll i=1; i<=1+(n-k); i++){
        if(a[i]!=1){
            cout<<1<<endl;
            return;
        }
    }
    ll curr=2;
    for(ll i=n-k; i<n; i+=2){
        if(a[i]!=curr){
            cout<<curr<<endl;
            return;
        }
        curr++;
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