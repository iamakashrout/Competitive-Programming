#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll ones=0;
    for(ll i=0; i<n; i++){
        if(s[i]=='1'){
            ones++;
        }
    }
    if(k>=ones){
        string ans="";
        for(ll i=0; i<n; i++){
            if(s[i]=='0'){
                ans+=s[i];
            }
            else{
                k--;
            }
        }
        while(k>0){
            ans.pop_back();
            k--;
        }
        cout<<ans<<endl;
    }
    else{
        for(ll i=0; i<n; i++){
            if(s[i]=='1'){
                if(k>0){
                    s[i]='0';
                    k--;
                }
            }
        }
        cout<<s<<endl;
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