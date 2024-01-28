#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1e9+7

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    vector<ll> right(n, 0);
    right[1]=1;
    for(ll i=1; i<n-1; i++){
        if(a[i+1]-a[i]>a[i]-a[i-1]){
            right[i+1]=right[i]+a[i+1]-a[i];
        }
        else{
            right[i+1]=right[i]+1;
        }
    }
    vector<ll> left(n, 0);
    left[n-2]=1;
    for(ll i=n-2; i>0; i--){
        if(a[i]-a[i-1]>a[i+1]-a[i]){
            left[i-1]=left[i]+a[i]-a[i-1];
        }
        else{
            left[i-1]=left[i]+1;
        }
    }
    ll m;
    cin>>m;
    while(m--){
        ll x, y;
        cin>>x>>y;
        if(x<y){
            cout<<right[y-1]-right[x-1]<<endl;
        }
        else{
            cout<<left[y-1]-left[x-1]<<endl;
        }
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