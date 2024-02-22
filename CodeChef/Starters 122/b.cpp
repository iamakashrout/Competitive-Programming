#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, m, x, y, l;
    cin>>n>>m>>x>>y>>l;
    ll a=(x-1)/l;
    ll b=(n-x)/l;
    ll c=(y-1)/l;
    ll d=(m-y)/l;
    cout<<(a+b+1)*(c+d+1)<<endl;
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