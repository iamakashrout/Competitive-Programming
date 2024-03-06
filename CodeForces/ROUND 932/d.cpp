#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, c;
    cin>>n>>c;
    vector<ll> s(n);
    for(ll i=0; i<n; i++){
        cin>>s[i];
    }
    ll total=(c+1)*(c+2)/2;
    ll sum=0;
    for(ll i=0; i<n; i++){
        sum+=(s[i]/2+1);
    }
    ll diff=0;
    for(ll i=0; i<n; i++){
        diff+=(c-s[i]+1);
    }
    ll intersection=0;
    ll odd=0;
    ll even=0;
    for(ll i=0; i<n; i++){
        if(s[i]%2==0){
            even++;
            intersection+=even;
        }
        else{
            odd++;
            intersection+=odd;
        }
    }
    ll ans=total-sum-diff+intersection;
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