#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll total=0;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        total+=a[i];
    }
    if(n==1){
        cout<<a[0]<<endl;
        return;
    }
    ll sum=0;
    ll curr=a[0];
    for(ll i=1; i<n; i++){
        curr+=a[i];
        sum=min(sum, curr);
        if(i<n-1 && curr>=a[i]){
            curr=a[i];
        }
    }
    ll ans=total+2*abs(sum);
    cout<<ans<<endl;
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