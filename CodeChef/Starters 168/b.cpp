#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, x, k;
    cin>>n>>x>>k;
    string s;
    cin>>s;
    ll ans=0;
    ll i=0;
    ll ones=0;
    while(i<n){
        if(s[i]=='1'){
            while(i<n && s[i]=='1'){
                ones++;
                i++;
            }
        }
        else{
            while(i<n && s[i]=='0'){
                ans+=ones;
                i++;
            }
        }
    }
    if(ans<=x && ans%k==0){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
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