#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll a, b;
    cin>>a>>b;
    if(a%2==1 && b%2==1){
        cout<<"NO"<<endl;
        return;
    }
    if(a%2==1){
        ll x1=2*a;
        ll x2=b/2;
        if(x1!=b){
            cout<<"YES"<<endl;
            return;
        }
        cout<<"NO"<<endl;
    }
    else if(b%2==1){
        ll x1=2*b;
        ll x2=a/2;
        if(x1!=a){
            cout<<"YES"<<endl;
            return;
        }
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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