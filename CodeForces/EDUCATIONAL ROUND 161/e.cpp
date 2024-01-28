#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1e9+7


void solve(){
    ll x;
    cin>>x;
    vector<ll> ans;
    ll small=-1;
    ll large=0;
    function<void(ll)> func=[&](ll i){
        if(i==1){
            return;
        }
        if(i&1){
            func(i-1);
            ans.push_back(small);
            small--;
        }
        else{
            func(i/2);
            ans.push_back(large);
            large++;
        }
    };
    func(x);
    cout<<ans.size()<<endl;
    for(ll i=0; i<ans.size(); i++){
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