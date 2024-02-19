#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, m;
    cin>>n>>m;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    string s;
    cin>>s;
    vector<ll> v;
    ll l=0, r=n-1;
    for(ll i=0; i<n; i++){
        if(s[i]=='L'){
            v.push_back(a[l]);
            l++;
        }
        else{
            v.push_back(a[r]);
            r--;
        }
    }
    ll product=1;
    vector<ll> ans;
    for(ll i=n-1; i>=0; i--){
        product*=v[i];
        product%=m;
        ans.push_back(product);
    }
    for(ll i=n-1; i>=0; i--){
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