#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, k;
    cin>>n>>k;
    ll b=log2(k);
    vector<ll> ans;
    ans.push_back(k-(1<<b));
    ans.push_back(k+1);
    ans.push_back(k+1+(1<<b));
    for(ll i=0; i<20; i++){
        if(i!=b){
            ans.push_back(1<<i);
        }
    }
    cout<<ans.size()<<endl;
    for(ll i=0; i<ans.size(); i++){
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