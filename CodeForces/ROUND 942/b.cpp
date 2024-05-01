#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<char> a(n);
    ll u=0;
    ll d=0;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        if(a[i]=='U'){
            u++;
        }
        else{
            d++;
        }
    }
    if(u%2==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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