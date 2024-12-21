#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    ll count=0;
    ll i=0;
    while(i<n){
        if(a[i]==0){
            i++;
        }
        else{
            count++;
            while(i<n && a[i]!=0){
                i++;
            }
        }
    }
    cout<<min(2ll, count)<<endl;
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