#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    char x='A';
    string ans="";
    for(ll i=0; i<n/2; i++){
        ans+=x;
        ans+=x;
        x++;
    }
    if(n%2==1){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
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