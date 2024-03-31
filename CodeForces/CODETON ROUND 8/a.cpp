#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, k;
    cin>>n>>k;
    if(k==1){
        for(ll i=1; i<=n; i++){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    if(n==k){
        for(ll i=1; i<=n; i++){
            cout<<1<<" ";
        }
        cout<<endl;
        return;
    }
    cout<<-1<<endl;
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