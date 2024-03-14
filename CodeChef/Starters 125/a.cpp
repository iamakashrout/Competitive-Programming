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
    ll ans=0;
    ll count=0;
    for(ll i=0; i<n; i++){
        if(s[i]=='1'){
            ans++;
        }
        else{
            ll curr=0;
            while(i<n && s[i]=='0'){
                curr++;
                i++;
            }
            count=max(count, curr);
            i--;
        }
    }
    cout<<ans+count<<endl;
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