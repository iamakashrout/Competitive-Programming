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
    sort(a.begin(), a.end());
    ll sum=0;
    ll curr=1;
    ll ans=0;
    for(ll i=1; i<n; i++){
        if(a[i]!=a[i-1]){
            if(curr>=2){
                ans+=(curr*(curr-1)*sum/2);
            }
            if(curr>=3){
                ans+=(curr*(curr-1)*(curr-2)/6);
            }
            sum+=curr;
            curr=1;
        }
        else{
            curr++;
        }
    }
    if(curr>=2){
        ans+=(curr*(curr-1)*sum/2);
    }
    if(curr>=3){
        ans+=(curr*(curr-1)*(curr-2)/6);
    }
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