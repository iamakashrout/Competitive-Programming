#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1e9+7

void solve(){
    ll x;
    cin>>x;
    string num="";
    while(x>0){
        if(x%2==1){
            num='1'+num;
        }
        else{
            num='0'+num;
        }
        x=x/2;
    }
    ll ans=1;
    bool check=false;
    for(int i=1; i<num.size(); i++){
        if(check==false && num[i]=='1'){
            check=true;
        }
        if(check==true && num[i]=='0'){
            ans=ans*2;
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