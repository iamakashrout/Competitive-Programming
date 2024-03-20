#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll a, b, c;
    cin>>a>>b>>c;
    ll ans=0;
    ans+=(b/3);
    if((b%3)>0 && c<(3-b%3)){
        cout<<-1<<endl;
        return;
    }
    if(b%3>0){
        c-=(3-b%3);
        ans++;
    }
    ans+=c/3;
    if(c%3!=0){
        ans++;
    }
    ans+=a;
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