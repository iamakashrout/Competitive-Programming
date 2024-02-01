#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1e9+7

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> ans;
    ans.push_back(1);
    ll x=1;
    ll odd=3;
    ll even=2;
    while(k>0){
        if(k==1){
            if(x==0){
                for(ll i=even; i<=n; i+=2){
                    ans.push_back(i);
                }
                for(ll i=odd; i<=n; i+=2){
                    ans.push_back(i);
                }
            }
            else{
                for(ll i=odd; i<=n; i+=2){
                    ans.push_back(i);
                }
                for(ll i=even; i<=n; i+=2){
                    ans.push_back(i);
                }
            }
        }
        else{
            if(x==0){
                ans.push_back(odd);
                odd+=2;
            }
            else{
                ans.push_back(even);
                even+=2;
            }
            x^=1;
        }
        k--;
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