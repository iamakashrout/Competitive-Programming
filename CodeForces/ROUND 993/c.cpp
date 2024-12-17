#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll m, a, b, c;
    cin>>m>>a>>b>>c;
    ll left=2*m;
    left-=min(m, a);
    left-=min(m, b);
    left-=min(left, c);
    cout<<2*m-left<<endl;
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