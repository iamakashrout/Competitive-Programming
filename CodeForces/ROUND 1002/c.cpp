#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<vector<ll>> v(n, vector<ll>(n));
    vector<ll> a;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            cin>>v[i][j];
        }
        a.push_back(0);
        while(v[i].size() && v[i].back()==1){
            a.back()++;
            v[i].pop_back();
        }
    }
    sort(a.begin(), a.end());
    ll count=0;
    ll i=0;
    while(i<n){
        i=lower_bound(a.begin()+i, a.end(), count+1)-a.begin();
        if(i==n){
            cout<<min(n, count+1)<<endl;
            return;
        }
        count++;
        i++;
    }
    cout<<min(n, count+1)<<endl;
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