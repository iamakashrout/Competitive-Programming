#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    string s;
    cin>>s;
    ll a=0, b=0;
    for(ll i=0; i<5; i++){
        if(s[i]=='A'){
            a++;
        }
        else{
            b++;
        }
    }
    if(a>b){
        cout<<'A'<<endl;
    }
    else{
        cout<<'B'<<endl;
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