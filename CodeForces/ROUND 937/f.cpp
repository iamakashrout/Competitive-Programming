#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll a, b, c;
    cin>>a>>b>>c;
    if(c!=a+1){
        cout<<-1<<endl;
        return;
    }
    if(a==0 && b==0 && c==1){
        cout<<0<<endl;
        return;
    }
    ll h=log2(2*c-1);
    ll last=pow(2, h);
    last-=c;
    if(b<=last){
        cout<<h<<endl;
        return;
    }
    b-=last;
    h+=((b+c-1)/c);
    cout<<h<<endl;
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