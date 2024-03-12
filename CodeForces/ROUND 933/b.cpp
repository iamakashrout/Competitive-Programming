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
    a[1]-=2*a[0];
    a[2]-=a[0];
    a[0]=0;
    if(a[1]<0 || a[2]<0){
        cout<<"NO"<<endl;
        return;
    }
    for(ll i=1; i<n-2; i++){
        a[i+1]-=2*a[i];
        a[i+2]-=a[i];
        if(a[i+1]<0 || a[i+2]<0){
            cout<<"NO"<<endl;
            return;
        }
        a[i]=0;
    }
    // for(ll i=0; i<n; i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    if(a[n-2]==0 && a[n-1]==0){
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