#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1e9+7

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    vector<ll> d(n);
    for(ll i=0; i<n; i++){
        cin>>d[i];
    }
    vector<ll> left(n);
    vector<ll> right(n);
    for(ll i=0; i<n; i++){
        left[i]=i-1;
        right[i]=i+1;
    }
    vector<ll> ans(n);
    vector<ll> check(n);
    for(ll i=0; i<n; i++){
        check[i]=i;
    }
    for(ll i=0; i<n; i++){
        set<ll> dead;
        for(ll x: check){
            ll damage=0;
            if(left[x]!=-1){
                damage+=a[left[x]];
            }
            if(right[x]!=n){
                damage+=a[right[x]];
            }
            if(damage>d[x]){
                dead.insert(x);
            }
        }
        check.clear();
        ans[i]=dead.size();
        for(ll x: dead){
            if(left[x]!=-1){
                right[left[x]]=right[x];
                if(dead.find(left[x])==dead.end()){
                    check.push_back(left[x]);
                }
            }
            if(right[x]!=n){
                left[right[x]]=left[x];
                if(dead.find(right[x])==dead.end()){
                    check.push_back(right[x]);
                }
            }
        }
    }
    for(ll i=0; i<n; i++){
        cout<<ans[i]<<" ";
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