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
    ll c00=0, c01=0, c10=0, c11=0;
    for(int i=0; i<n-1; i+=2){
        if(s[i]=='0' && s[i+1]=='0'){
            c00++;
        }
        else if(s[i]=='0' && s[i+1]=='1'){
            c01++;
        }
        else if(s[i]=='1' && s[i+1]=='0'){
            c10++;
        }
        else if(s[i]=='1' && s[i+1]=='1'){
            c11++;
        }
    }
    ll ans=0;
    if(c10>=1){
        ans++;
    }
    ans+=c00*2;
    if(c01>=1){
        ans+=2;
    }
    ans+=c11*2;
    if(c10>=2){
        ans++;
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