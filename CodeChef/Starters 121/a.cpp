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
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }
    else if(n==2){
        if(a[1]<a[0]){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        return;
    }
    else if(n==3){
        if((a[1]<a[0] && a[1]<a[2]) || (a[1]>a[0] && a[1]>a[2])){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        return;
    }
    else{
        cout<<"YES"<<endl;
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