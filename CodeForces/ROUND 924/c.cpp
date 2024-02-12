#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

vector<ll> factors(ll n){
    vector<ll> ans;
    for(ll i=1; i*i<=n; i++){
        if(n%i==0){
            if(i*i==n){
                ans.push_back(i);
            }
            else{
                ans.push_back(i);
                ans.push_back(n/i);
            }
        }
    }
    return ans;
}

void solve(){
    ll n, x;
    cin>>n>>x;
    ll rem=n-x;
    vector<ll> fac=factors(rem);
    set<ll> s;
    for(ll i=0; i<fac.size(); i++){
        if(fac[i]%2==0){
            s.insert((fac[i]+2)/2);
        }
    }
    rem=n+x-2;
    fac=factors(rem);
    for(ll i=0; i<fac.size(); i++){
        if(fac[i]%2==0){
            s.insert((fac[i]+2)/2);
        }
    }
    ll ans=0;
    for(auto i=s.begin(); i!=s.end(); i++){
        if(*i>=x){
            ans++;
        }
    }
    cout<<ans<<endl;
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