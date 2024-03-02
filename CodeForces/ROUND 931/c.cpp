#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

ll query(ll x, ll y){
    cout<<'?'<<' '<<x<<' '<<y<<endl;
    ll q;
    cin>>q;
    return q;
}

void solve(){
    ll n, m;
    cin>>n>>m;
    ll ans=0;
    ll q1=query(1, 1);
    ll x=min(n, q1+1);
    ll y=min(m, q1+1);
    ll q2=query(x, q1-x+2);
    ll q3=query(q1-y+2, y);
    if(x-q2/2<=n && q1-x+2+q2/2<=m && q2%2==0){
        ll q4=query(x-q2/2, q1-x+2+q2/2);
        ans=(q4!=0);
    }
    else{
        ans=1;
    }
    if(ans==0){
        cout<<'!'<<' '<<x-q2/2<<' '<<q1-x+2+q2/2<<endl;
    }
    else{
        cout<<'!'<<' '<<q1-y+2+q3/2<<' '<<y-q3/2<<endl;
    }
}

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}