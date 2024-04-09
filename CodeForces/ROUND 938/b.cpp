#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, c, d;
    cin>>n>>c>>d;
    vector<ll> a(n*n);
    map<ll, ll> mp;
    ll mn=LONG_LONG_MAX;
    for(ll i=0; i<n*n; i++){
        cin>>a[i];
        mp[a[i]]++;
        mn=min(mn, a[i]);
    }
    vector<vector<ll>> v(n, vector<ll>(n));
    v[0][0]=mn;
    for(ll i=1; i<n; i++){
        v[0][i]=v[0][i-1]+d;
        if(mp[v[0][i]]==0){
            cout<<"NO"<<endl;
            return;
        }
        mp[v[0][i]]--;
    }
    for(ll i=1; i<n; i++){
        v[i][0]=v[i-1][0]+c;
        if(mp[v[i][0]]==0){
            cout<<"NO"<<endl;
            return;
        }
        mp[v[i][0]]--;
    }
    for(ll i=1; i<n; i++){
        for(ll j=1; j<n; j++){
            if(v[i-1][j]+c!=v[i][j-1]+d){
                cout<<"NO"<<endl;
                return;
            }
            v[i][j]=v[i-1][j]+c;
            if(mp[v[i][j]]==0){
                cout<<"NO"<<endl;
                return;
            }
            mp[v[i][j]]--;
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