#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    cout<<1<<" "<<1<<endl;
    cout<<n<<" "<<n<<endl;
    ll count=2;
    ll turn=0;
    ll diff=1;
    while(count<n){
        if(count==n-1 && n%2==1){
            cout<<n-diff<<" "<<n<<endl;
            break;
        }
        if(turn%2==0){
            cout<<1+diff<<" "<<1<<endl;
            turn=1;
        }
        else{
            cout<<n-diff<<" "<<n<<endl;
            turn=0;
        }
        diff++;
        count++;
    }
    cout<<endl;
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