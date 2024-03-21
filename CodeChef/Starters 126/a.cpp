#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll count=0;
    bool prev=false;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==i+1 && prev==false){
            count++;
            prev=true;
        }
        else{
            prev=false;
        }
    }
    cout<<count<<endl;
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