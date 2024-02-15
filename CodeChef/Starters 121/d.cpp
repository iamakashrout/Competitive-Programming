#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll Xor=0;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        Xor^=a[i];
    }
    bool check=false;
    for(ll i=59; i>0; i--){
        ll ones=0;
        for(ll j=0; j<n; j++){
            ones+=(((1ll<<i)&a[j])>0);
        }
        if(ones>0 && ones%2==0){
            check=true;
        }
        if(check){
            Xor|=(1ll<<i);
        }
    }
    cout<<Xor<<endl;
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