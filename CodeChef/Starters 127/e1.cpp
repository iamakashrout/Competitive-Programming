#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

ll l=1;
ll r=3*(1e5);
vector<ll> ans(r+1, 0);
void helper(){
    ans[1]=1;
    for(ll i=2; i<=r; i++){
        ll temp=i;
        ll mx=1;
        for(ll j=2; j*j<=temp; j++){
            ll curr=1;
            while(temp%j==0){
                temp/=j;
                curr=curr*j;
            }
            mx=max(mx, curr);
        }
        if(temp>1){
            mx=max(mx, temp);
        }
        ans[i]=ans[i-1]+mx;
    }
}

void solve(){
    ll left, right;
    cin>>left>>right;
    cout<<ans[right]<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    helper();
    while(t--){
        solve();
    }
    return 0;
}