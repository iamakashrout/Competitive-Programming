#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    ll ones=0;
    bool square=true;
    for(ll i=0; i<n; i++){
        ll curr=0;
        for(ll j=0; j<n; j++){
            char x;
            cin>>x;
            if(x=='1'){
                curr++;
            }
        }
        if(ones!=0 && curr!=0 && curr!=ones){
            square=false;
        }
        ones=curr;
    }
    if(square){
        cout<<"SQUARE"<<endl;
    }
    else{
        cout<<"TRIANGLE"<<endl;
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