#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, x, y;
    cin>>n>>x>>y;
    vector<ll> a(x);
    for(ll i=0; i<x; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    ll ans=n-2;
    vector<ll> f;
    vector<ll> rem; 
    for(ll i=0; i<x; i++){
        ll first=a[i];
        ll second=a[(i+1)%x];
        ll diff=(second-first+n)%n;
        if(diff>2){
            if(diff%2==0){
                f.push_back(diff-1);
            }
            else{
                rem.push_back(diff-1);
            }
        }
    }
    sort(f.begin(), f.end());
    for(ll i=0; i<f.size(); i++){
        if(y<f[i]/2){
            ll y1=y;
            y-=min(y1, f[i]/2);
            f[i]-=2*min(y1, f[i]/2);
            ans-=f[i];
        }
        else{
            y-=f[i]/2;
            f[i]=0;
        }
    }
    sort(rem.begin(), rem.end());
    for(ll i=0; i<rem.size(); i++){
        ll y1=y;
        y-=min(y1, rem[i]/2);
        rem[i]-=2*min(y1, rem[i]/2);
        ans-=rem[i];
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