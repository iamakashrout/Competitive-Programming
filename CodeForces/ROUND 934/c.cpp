#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    map<ll, ll> mp;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    if(mp[0]==0){
        cout<<0<<endl;
        return;
    }
    ll count=(mp[0]>1);
    for(ll i=1; i<=n; i++){
        if(mp[i]==0){
            cout<<i<<endl;
            return;
        }
        if(mp[i]<=1){
            if(count==1){
                count--;
            }
            else{
                cout<<i<<endl;
                return;
            }
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