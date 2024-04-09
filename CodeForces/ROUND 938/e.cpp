#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=1;
    for(ll len=2; len<=n; len++){
        vector<ll> flip(n, 0);
        ll f=0;
        for(ll i=0; i<=n-len; i++){
            if((f+s[i]-'0')%2==0){
                f^=1;
                flip[i+len-1]=1;
            }
            f^=flip[i];
        }
        bool check=true;
        for(ll i=n-len+1; i<n; i++){
            check&=((f+s[i]-'0')%2==1);
            f^=flip[i];
        }
        if(check){
            ans=len;
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