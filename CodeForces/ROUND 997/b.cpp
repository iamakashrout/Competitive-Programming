#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<string> v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    vector<ll> ans(n);
    for(ll i=0; i<n; i++){
        ans[i]=i+1;
    }
    sort(ans.begin(), ans.end(), [&](ll a, ll b){
        if(a<b){
            return v[a-1][b-1]=='1';
        }
        return v[a-1][b-1]=='0';
    });
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