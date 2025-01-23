#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll odd=0;
    ll even=0;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(even==0){
        cout<<odd-1<<endl;
    }
    else{
        cout<<odd+1<<endl;
    }
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