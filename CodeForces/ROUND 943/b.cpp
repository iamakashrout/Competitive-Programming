#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, m;
    cin>>n>>m;
    string a;
    cin>>a;
    string b;
    cin>>b;
    ll k=0;
    ll j=0;
    for(ll i=0; i<n; i++){
        while(j<m && a[i]!=b[j]){
            j++;
        }
        if(j<m){
            k++;
            j++;
        }
        else{
            break;
        }
    }
    cout<<k<<endl;
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