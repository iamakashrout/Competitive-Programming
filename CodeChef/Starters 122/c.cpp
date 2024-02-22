#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    string s="";
    ll temp=n;
    while(n>0){
        if(n%2==0){
            s='0'+s;
        }
        else{
            s='1'+s;
        }
        n/=2;
    }
    ll i=0;
    ll count=0;
    n=s.size();
    while(i<n && s[i]=='1'){
        i++;
        count++;
    }
    bool check=true;
    while(i<n){
        if(s[i]=='1'){
            check=false;
            break;
        }
        i++;
    }
    if(check){
        cout<<0<<endl;
        return;
    }
    ll num=0;
    ll j=0;
    while(j<count+1){
        num=num*2+1;
        j++;
    }
    while(j<n){
        num=num*2;
        j++;
    }
    cout<<num-temp<<endl;
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