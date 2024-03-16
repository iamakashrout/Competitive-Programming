#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<vector<char>> a(2, vector<char>(n));
    for(ll i=0; i<2; i++){
        for(ll j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    if(n%2==1){
        cout<<"NO"<<endl;
        return;
    }
    if(n==2){
        cout<<"YES"<<endl;
        return;
    }
    if(a[1][n-2]=='<'){
        cout<<"NO"<<endl;
        return;
    }
    ll prev=0;
    for(ll i=n-3; i>=1; i-=2){
        if(a[0][i]=='<' && a[1][i-1]=='<'){
            cout<<"NO"<<endl;
            return;
        }
        else if(a[0][i]=='<' && a[1][i-1]=='>'){
            if(prev==2){
                cout<<"NO"<<endl;
                return;
            }
        }
        else if(a[0][i]=='>' && a[1][i-1]=='<'){
            prev=2;
        }
        else{
            prev=0;
        }
    }
    cout<<"YES"<<endl;
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