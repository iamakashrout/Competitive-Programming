#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, m;
    cin>>n>>m;
    vector<vector<ll>> v(n, vector<ll>(m));
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin>>v[i][j];
        }
        sort(v[i].begin(), v[i].end());
    }
    vector<pair<ll, ll>> temp;
    for(ll i=0; i<n; i++){
        temp.push_back({v[i][0], i});
    }
    sort(temp.begin(), temp.end());
    vector<ll> order;
    for(ll i=0; i<n; i++){
        order.push_back(temp[i].second);
    }
    ll prev=temp[n-1].first;
    for(ll j=1; j<m; j++){
        vector<pair<ll, ll>> temp1;
        for(ll i=0; i<n; i++){
            temp1.push_back({v[i][j], i});
        }
        sort(temp1.begin(), temp1.end());
        if(temp1[0].first<=prev){
            cout<<-1<<endl;
            return;
        }
        for(ll i=0; i<n; i++){
            if(temp1[i].second!=order[i]){
                cout<<-1<<endl;
                return;
            }
        }
        prev=temp1[n-1].first;
    }
    for(ll i=0; i<n; i++){
        cout<<order[i]+1<<" ";
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