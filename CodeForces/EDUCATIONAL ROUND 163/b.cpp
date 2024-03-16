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
    ll prev=a[n-1];
    for(ll i=n-2; i>=0; i--){
        if(a[i]>prev){
            while(a[i]>0){
                ll x=a[i]%10;
                if(x>prev){
                    cout<<"NO"<<endl;
                    return;
                }
                prev=x;
                a[i]/=10;
            }
        }
        else{
            prev=a[i];
        }
    }
    cout<<"YES"<<endl;
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