#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> p(n);
    for(ll i=0; i<n; i++){
        cin>>p[i];
    }
    vector<ll> ans(n+1, 0);
    for(ll i=0; i<n; i++){
        ll sum=0;
        for(ll j=i; j<n; j++){
            sum+=p[j];
            if(sum<=n){
                ans[sum]++;
            }
            else{
                break;
            }
        }
    }
    for(ll i=1; i<=n; i++){
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