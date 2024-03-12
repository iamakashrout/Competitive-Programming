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
    string prev="";
    ll ans=0;
    for(ll i=0; i<n; i++){
        if(s[i]=='m'){
            prev="m";
        }
        else if(s[i]=='a' && prev=="m"){
            prev="ma";
        }
        else if(s[i]=='p' && prev=="ma"){
            ans++;
            prev="map";
        }
        else if(s[i]=='i' && prev=="map"){
            prev="";
        }
        else if(s[i]=='p'){
            prev="p";
        }
        else if(s[i]=='i' && prev=="p"){
            prev="pi";
        }
        else if(s[i]=='e' && prev=="pi"){
            ans++;
            prev="";
        }
        else{
            prev="";
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