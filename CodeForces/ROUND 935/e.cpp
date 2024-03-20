#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, x;
    cin>>n>>x;
    vector<ll> a(n+1);
    for(ll i=1; i<=n; i++){
        cin>>a[i];
    }
    ll pos=0;
    for(ll i=1; i<=n; i++){
        if(a[i]==x){
            pos=i;
            break;
        }
    }
    vector<pair<ll, ll>> v;
    if(pos!=1){
        swap(a[pos], a[1]);
        v.push_back({pos, 1});
    }
    ll last=1;
    ll l=1, r=n+1;
    while(r-l!=1){
        ll mid=(l+r)/2;
        if(a[mid]<=x){
            l=mid;
            last=mid;
        }
        else{
            r=mid;
        }
    }
    if(l!=1){
        v.push_back({last, 1});
        swap(a[last], a[1]);
    }
    cout<<v.size()<<endl;
    if(v.size()>0){
        for(ll i=0; i<v.size(); i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
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