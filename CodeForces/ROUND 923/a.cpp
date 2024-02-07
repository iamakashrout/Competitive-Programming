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
    ll first=-1;
    ll last=-1;
    bool found=false;
    for(ll i=0; i<n; i++){
        if(s[i]=='B'){
            if(found==false){
                found=true;
                first=i;
                last=i;
            }
            else{
                last=i;
            }
        }
    }
    if(found==true){
        cout<<last-first+1<<endl;
        return;
    }
    cout<<0<<endl;
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