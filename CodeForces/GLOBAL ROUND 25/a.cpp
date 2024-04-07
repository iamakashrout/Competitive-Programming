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
    ll count=0;
    for(ll i=0; i<n; i++){
        if(s[i]=='1'){
            count++;
        }
    }
    if(count%2==1){
        cout<<"NO"<<endl;
    }
    else if(count==2){
        for(ll i=0; i<n-1; i++){
            if(s[i]=='1' && s[i+1]=='1'){
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
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