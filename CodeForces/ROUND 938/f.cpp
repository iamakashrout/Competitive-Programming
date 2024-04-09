#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll p1, p2, p3, p4;
    cin>>p1>>p2>>p3>>p4;
    ll ans=p1/2+p2/2+p3/2+p4/2;
    if(p1%2==1 && p2%2==1 && p3%2==1){
        ans++;
    }
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