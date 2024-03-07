#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll l, r;
    cin>>l>>r;
    if(l%2==0 && r%2==0){
        cout<<-1<<endl;
        return;
    }
    if(l%2!=r%2){
        ll index=0;
        for(ll i=l; i<=r; i++){
            if(index%2==0){
                cout<<i+1<<" ";
            }
            else{
                cout<<i-1<<" ";
            }
            index++;
        }
        cout<<endl;
    }
    else{
        ll n=r-l+1;
        vector<ll> ans(n);
        ll val=l+1;
        for(ll i=0; i<=n-3; i+=2){
            ans[i]=val;
            val+=2;
        }
        val=l;
        for(ll i=1; i<=n-4; i+=2){
            ans[i]=val;
            val+=2;
        }
        ans[n-2]=r;
        ans[n-1]=r-2;
        for(ll i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
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