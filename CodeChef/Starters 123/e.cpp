#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, a, b;
    cin>>n>>a>>b;
    if(a>b || n<=a){
        cout<<"Alice"<<endl;
    }
    else if(a<b){
        cout<<"Bob"<<endl;
    }
    else{
        ll x=a+1;
        if(n%x==0){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
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