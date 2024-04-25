#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    if(n%3==2){
        cout<<4<<" "<<5<<" "<<2<<" "<<1<<" "<<3<<" ";
        for(ll i=6; i<=n; i++){
            if(i%3==0){
                cout<<i+2<<" ";
            }
            else if(i%3==1){
                cout<<i<<" ";
            }
            else if(i%3==2){
                cout<<i-2<<" ";
            }
        }
        cout<<endl;
    }
    else{
        ll fac=n/3;
        ll val=fac*3;
        for(ll i=1; i<=val; i++){
            if(i%3==1){
                cout<<i<<" ";
            }
            else if(i%3==2){
                cout<<i+1<<" ";
            }
            else if(i%3==0){
                cout<<i-1<<" ";
            }
        }
        if(val<n){
            cout<<n<<" ";
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