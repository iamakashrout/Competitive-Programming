#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    string p;
    cin>>p;
    string c;
    cin>>c;
    vector<ll> ans;
    for(ll i=0; i<n; i++){
        if(c[i]<p[i]){
            c[i]+=26;
        }
        ll x=c[i]-p[i];
        while(x%3!=0){
            x+=26;
        }
        ans.push_back(x/3);
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