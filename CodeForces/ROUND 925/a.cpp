#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    string ans="";
    if(n>=28){
        n-=26;
        ans=ans+"z";
    }
    else{
        char c='a'+n-2-1;
        ans.push_back(c);
        n=2;
    }
    if(n>=27){
        n-=26;
        ans="z"+ans;
    }
    else{
        char c='a'+n-1-1;
        ans=c+ans;
        n=1;
    }
    char c='a'+n-1;
    ans=c+ans;
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