#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll x;
    cin>>x;
    ll shift=log2(x)+1;
    ll a=x*(1<<shift);
    ll b=a+x;
    cout<<a<<" "<<b<<endl;
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