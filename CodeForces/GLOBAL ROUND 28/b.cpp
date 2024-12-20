#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> ans(n, -1);
    ll val=1;
    ll ind=k-1;
    while(ind<n){
        ans[ind]=val;
        val++;
        ind+=k;
    }
    for(ll i=0; i<n; i++){
        if(ans[i]==-1){
            ans[i]=val;
            val++;
        }
    }
    for(ll k=0; k<n; k++){
        cout<<ans[k]<<" ";
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