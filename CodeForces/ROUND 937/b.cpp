#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    for(ll i=0; i<n; i++){
        if(i%2==0){
            for(ll j=0; j<n; j++){
                if(j%2==0){
                    cout<<"##";
                }
                else{
                    cout<<"..";
                }
            }
            cout<<endl;
            for(ll j=0; j<n; j++){
                if(j%2==0){
                    cout<<"##";
                }
                else{
                    cout<<"..";
                }
            }
        }
        else{
            for(ll j=0; j<n; j++){
                if(j%2==0){
                    cout<<"..";
                }
                else{
                    cout<<"##";
                }
            }
            cout<<endl;
            for(ll j=0; j<n; j++){
                if(j%2==0){
                    cout<<"..";
                }
                else{
                    cout<<"##";
                }
            }
        }
        cout<<endl;
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