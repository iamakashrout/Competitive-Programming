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
    ll ones=0;
    ll zeros=0;
    for(ll i=0; i<n; i++){
        if(s[i]=='0'){
            zeros++;
        }
        else{
            ones++;
        }
    }
    if(ones==zeros || n==1){
        cout<<"Bob"<<endl;
    }
    else{
        ll diff=abs(ones-zeros);
        if(diff==1 || diff%2==0){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
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