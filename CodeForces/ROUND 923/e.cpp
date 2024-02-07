#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> ans(n, 0);
    ll a=1, b=n;
    for(ll i=0; i<n; i++){
        if(i%2==0){
            for(ll j=i; j<n; j+=k){
                if(ans[j]!=0){
                    break;
                }
                ans[j]=a;
                a++;
            }
        }
        else{
            for(ll j=i; j<n; j+=k){
                if(ans[j]!=0){
                    break;
                }
                ans[j]=b;
                b--;
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