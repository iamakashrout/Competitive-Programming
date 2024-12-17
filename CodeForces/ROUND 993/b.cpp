#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    string s;
    cin>>s;
    string ans="";
    for(ll i=0; i<s.size(); i++){
        if(s[i]=='p'){
            ans+='q';
        }
        else if(s[i]=='q'){
            ans+='p';
        }
        else{
            ans+='w';
        }
    }
    reverse(ans.begin(), ans.end());
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