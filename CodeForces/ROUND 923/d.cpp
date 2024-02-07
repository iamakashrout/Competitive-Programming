#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    map<ll, ll> ind;
    vector<ll> mask(n, 1);
    ind[1]=0;
    for(ll i=1; i<n; i++){
        while(i<n && a[i]==a[i-1]){
            mask[i]=mask[i-1];
            i++;
        }
        if(i<n){
            mask[i]=mask[i-1]+1;
            ind[mask[i]]=i;
        }
    }
    // for(ll i=0; i<n; i++){
    //     cout<<mask[i]<<" ";
    // }
    ll q;
    cin>>q;
    for(ll i=0; i<q; i++){
        ll l, r;
        cin>>l>>r;
        if(mask[l-1]==mask[r-1]){
            cout<<-1<<" "<<-1<<endl;
        }
        else{
            cout<<l<<" "<<ind[mask[l-1]+1]+1<<endl;
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