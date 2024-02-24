#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, q;
    cin>>n>>q;
    vector<ll> c(n);
    vector<ll> prefix(n+1, 0);
    ll sum=0;
    ll oneCount=0;
    vector<ll> ones(n+1, 0);
    for(ll i=0; i<n; i++){
        cin>>c[i];
        sum+=(c[i]-1);
        prefix[i+1]=sum;
        if(c[i]==1){
            oneCount++;
        }
        ones[i+1]=oneCount;
    }
    while(q--){
        ll l, r;
        cin>>l>>r;
        ll val=prefix[r]-prefix[l-1];
        ll num=(r-l+1);
        ll one=ones[r]-ones[l-1];
        if(num>1 && val>=one){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
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