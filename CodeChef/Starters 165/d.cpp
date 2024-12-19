#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll x1, y1, z1, x2, y2, z2, k;
    cin>>x1>>y1>>z1>>x2>>y2>>z2>>k;
    ll a=abs(x1-x2);
    ll b=abs(y1-y2);
    ll c=abs(z1-z2);
    ll sum=a+b+c;
    ll mx=max({a, b, c});
    ll rem=sum-mx;
    if(mx<=k*(rem+1)){
        cout<<sum<<endl;
        return;
    }
    ll left=mx-k*(rem+1);
    ll div=(left+k-1)/k;
    ll ans=sum;
    ans+=div;
    if(div%2==1){
        ans++;
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