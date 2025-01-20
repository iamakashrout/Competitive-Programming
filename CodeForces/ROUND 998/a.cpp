#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll a1, a2, a4, a5;
    cin>>a1>>a2>>a4>>a5;
    ll x=a1+a2;
    ll count=1;
    if(a2+x==a4){
        count++;
    }
    if(x+a4==a5){
        count++;
    }
    ll ans=count;
    x=a4-a2;
    count=1;
    if(x+a4==a5){
        count++;
    }
    ans=max(ans, count);
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