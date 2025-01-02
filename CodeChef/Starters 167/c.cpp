#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> v;
    ll a=1;
    ll b=n;
    for(ll i=0; i<n-1; i++){
        if(i%2==0){
            v.push_back(a);
            a++;
        }
        else{
            v.push_back(b);
            b--;
        }
    }
    v.push_back(a);
    ll curr=0;
    while(curr<n){
        for(ll i=0; i<n; i++){
            cout<<v[(i+curr)%n]<<" ";
        }
        cout<<endl;
        curr++;
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