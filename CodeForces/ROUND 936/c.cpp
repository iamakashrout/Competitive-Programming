#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<vector<ll>> tree(n+1);
    for(ll i=0; i<n-1; i++){
        ll x, y;
        cin>>x>>y;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }
    ll l=0, r=n;
    ll ans=0;
    auto check=[&](ll x){
        ll cuts=0;
        function<ll(ll, ll)>dfs=[&](ll node, ll parent){
            ll size=1;
            for(auto &i: tree[node]){
                if(i!=parent){
                    size+=dfs(i, node);
                }
            }
            if(size>=x){
                size=0;
                cuts++;
            }
            return size;
        };
        dfs(1, 1);
        return cuts>k;
    };
    while(l<=r){
        ll mid=(l+r)/2;
        if(check(mid)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
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