#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    string a, b;
    cin>>a;
    cin>>b;
    ll ones=0;
    ll mix=0;
    for(ll i=0; i<n; i++){
        if(a[i]=='1' && b[i]=='1'){
            ones++;
        }
        else if(a[i]=='1' || b[i]=='1'){
            mix++;
        }
    }
    if(ones%2==1){
        cout<<"YES"<<endl;
    }
    else if(mix>0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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