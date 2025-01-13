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
    vector<ll> b(n);
    for(ll i=0; i<n; i++){
        cin>>b[i];
    }
    ll count=0;
    for(ll i=0; i<n; i++){
        if(b[i]>a[i]){
            count++;
        }
    }
    if(count>1){
        cout<<"NO"<<endl;
        return;
    }
    if(count==0){
        cout<<"YES"<<endl;
        return;
    }
    ll mn=INT_MAX;
    ll req=0;
    for(ll i=0; i<n; i++){
        if(a[i]<b[i]){
            req=b[i]-a[i];
        }
        else{
            mn=min(mn, a[i]-b[i]);
        }
    }
    if(mn>=req){
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