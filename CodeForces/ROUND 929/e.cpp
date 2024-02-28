#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    vector<ll> prefix(n+1, 0);
    ll sum=0;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
        prefix[i+1]=sum;
    }
    // for(ll i=0; i<=n; i++){
    //     cout<<prefix[i]<<" ";
    // }
    // cout<<endl;
    ll q;
    cin>>q;
    while(q--){
        ll l, u;
        cin>>l>>u;
        ll val=prefix[l-1]+u;
        ll index=lower_bound(prefix.begin(), prefix.end(), val)-prefix.begin();
        if(index>n){
            cout<<n<<" ";
            continue;
        }
        ll a=prefix[index]-val-1;
        ll b=val-prefix[index-1];
        if(a<b || index==l){
            cout<<index<<" ";
        }
        else{
            cout<<index-1<<" ";
        }
    }
    cout<<endl;
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