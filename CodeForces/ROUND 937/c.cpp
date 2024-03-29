#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    string s;
    cin>>s;
    string ans="";
    ll hour=(s[0]-'0')*10+(s[1]-'0');
    //cout<<hour<<endl;
    if(hour>=12){
        string ans="";
        if(hour>12){
            hour=hour%12;
        }
        char b=hour%10+'0';
        hour/=10;
        char a=hour%10+'0';
        ans+=a;
        ans+=b;
        ans+=':';
        ans+=s[3];
        ans+=s[4];
        ans+=' ';
        ans+="PM";
        cout<<ans<<endl;
    }
    else{
        if(hour==0){
            hour=12;
        }
        char b=hour%10+'0';
        hour/=10;
        char a=hour%10+'0';
        ans+=a;
        ans+=b;
        ans+=':';
        ans+=s[3];
        ans+=s[4];
        ans+=' ';
        ans+="AM";
        cout<<ans<<endl;
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