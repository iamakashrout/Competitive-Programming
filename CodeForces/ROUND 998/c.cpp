#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    ll count=0;
    map<ll, ll> mp;
    for(ll i=0; i<n; i++){
        if(mp[k-a[i]]>0){
            count++;
            mp[k-a[i]]--;
            //cout<<"c "<<i<<" "<<count<<endl;
        }
        else{
            mp[a[i]]++;
        }
    }
    cout<<count<<endl;
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