#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, k;
    cin>>n>>k;
    if(k>n){
        cout<<"NO"<<endl;
        return;
    }
    if(k==n){
        cout<<"YES"<<endl;
        cout<<1<<endl;
        cout<<1<<endl;
        return;
    }
    if(k>(n+1)/2){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    cout<<2<<endl;
    cout<<n-k+1<<" "<<1<<endl;
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