#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, a, b, c;
    cin>>n>>a>>b>>c;
    ll sum=a+b+c;
    ll div=n/sum;
    if(n%sum==0){
        cout<<div*3<<endl;
        return;
    }
    n-=(div*sum);
    ll ans=div*3;
    n-=a;
    ans++;
    if(n<=0){
        cout<<ans<<endl;
        return;
    }
    n-=b;
    ans++;
    if(n<=0){
        cout<<ans<<endl;
        return;
    }
    n-=c;
    ans++;
    if(n<=0){
        cout<<ans<<endl;
        return;
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