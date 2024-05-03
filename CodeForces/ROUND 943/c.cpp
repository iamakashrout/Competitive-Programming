#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> x(n-1);
    for(ll i=0; i<n-1; i++){
        cin>>x[i];
    }
    vector<ll> ans(n);
    ans[0]=x[0]+1;
    ans[1]=ans[0]+x[0];
    for(ll i=2; i<n; i++){
        while(x[i-1]>=ans[i-1]){
            ans[i-1]+=ans[i-2];
        }
        ans[i]=ans[i-1]+x[i-1];
    }
    for(ll i=0; i<n; i++){
        cout<<ans[i]<<" ";
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