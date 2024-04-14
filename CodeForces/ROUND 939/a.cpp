#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll k, q;
    cin>>k>>q;
    vector<ll> a(k);
    for(ll i=0; i<k; i++){
        cin>>a[i];
    }
    vector<ll> queries(q);
    for(ll i=0; i<q; i++){
        cin>>queries[i];
    }
    for(ll i=0; i<q; i++){
        ll curr=queries[i];
        for(ll j=k-1; j>=0; j--){
            while(curr>=a[j]){
                curr-=(j+1);
            }
        }
        cout<<curr<<" ";
    }
    cout<<endl;
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