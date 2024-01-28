#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1e9+7

void solve(){
    ll x, n;
    cin>>x>>n;
    vector<ll> factors;
    // cout<<sqrt(x)<<" ";
    ll root=sqrt(x);
    //cout<<root<<endl;
    for(ll i=1; i<=root; i++){
        if(x%i==0){
            factors.push_back(i);
            if(i!=(x/i)){
                factors.push_back(x/i);
            }
        }
    }
    sort(factors.begin(), factors.end());
    // for(ll i=0; i<factors.size(); i++){
    //     cout<<factors[i]<<" ";
    // }
    // cout<<endl;
    ll index=lower_bound(factors.begin(), factors.end(), n)-factors.begin();
    // cout<<index<<endl;
    cout<<x/factors[index]<<endl;
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