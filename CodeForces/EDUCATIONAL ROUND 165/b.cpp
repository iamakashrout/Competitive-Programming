#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    string s;
    cin>>s;
    ll n=s.size();
    ll ans=0;
    ll curr=0;
    for(ll i=0; i<n; i++){
        if(s[i]=='0'){
            if(curr>0){
                ans+=(curr+1);
            }
        }
        else{
            curr++;
        }
    }
    cout<<ans<<endl;
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