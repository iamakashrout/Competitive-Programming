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
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        v[i]=a[i]+i+1;
    }
    ll prev=1e18;
    sort(v.begin(), v.end(), greater<ll>());
    for(ll i=0; i<n; i++){
        if(v[i]<prev){
            cout<<v[i]<<" ";
            prev=v[i];
        }
        else{
            cout<<prev-1<<" ";
            prev=prev-1;
        }
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