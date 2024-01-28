#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1e9+7

void solve(){
    ll n;
    cin>>n;
    string a, b, c;
    cin>>a;
    cin>>b;
    cin>>c;
    bool check=false;
    for(ll i=0; i<n; i++){
        if(((a[i]!=b[i]) && (a[i]!=c[i]) && (b[i]!=c[i])) || (((a[i]==b[i]) && (a[i]!=c[i])))){
            check=true;
            break;
        }
    }
    if(check){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
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