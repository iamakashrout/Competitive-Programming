#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    bool same=true;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        if(i>0 && same==true){
            if(a[i]!=a[i-1]){
                same=false;
            }
        }
    }
    if(same){
        cout<<0<<endl;
        return;
    }
    if(a[0]==a[n-1]){
        ll first=-1;
        for(ll i=1; i<n-1; i++){
            if(a[i]!=a[0]){
                first=i;
                break;
            }
        }
        ll last=-1;
        for(ll i=n-2; i>=1; i--){
            if(a[i]!=a[n-1]){
                last=i;
                break;
            }
        }
        cout<<last-first+1<<endl;
        return;
    }
    ll first=-1;
    for(ll i=1; i<n; i++){
        if(a[i]!=a[0]){
            first=i;
            break;
        }
    }
    ll last=-1;
    for(ll i=n-2; i>=0; i--){
        if(a[i]!=a[n-1]){
            last=i;
            break;
        }
    }
    ll e=n-1-first+1;
    ll f=last-0+1;
    ll ans=min(e, f);
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