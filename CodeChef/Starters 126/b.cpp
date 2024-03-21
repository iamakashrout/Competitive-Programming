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
    bool common=false;
    string prev="";
    prev+=s[0];
    prev+=s[1];
    prev+=s[2];
    if(s[0]!=s[1] || s[0]!=s[2]){
        ans++;
    }
    else{
        common=true;
    }
    string org=prev;
    char x=prev[1];
    prev[1]=prev[2];
    char y=prev[0];
    prev[0]=x;
    prev[2]=y;
    //cout<<org<<" "<<prev<<endl;
    for(ll i=3; i<n; i++){
        string temp="";
        temp+=s[i-2];
        temp+=s[i-1];
        temp+=s[i];
        if(temp[0]==temp[1] && temp[0]==temp[2]){
            common=true;
            continue;
        }
        string org2=temp;
        char u=temp[1];
        temp[1]=temp[2];
        char v=temp[0];
        temp[0]=u;
        temp[2]=v;
        //cout<<org2<<" "<<temp<<endl;
        string first=prev;
        first+=org2[2];
        string second="";
        second+=org[0];
        second+=temp;
        //cout<<first<<" "<<second<<endl;
        if(first!=second){
            ans++;
        }
        org=org2;
        prev=temp;
    }
    if(common){
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