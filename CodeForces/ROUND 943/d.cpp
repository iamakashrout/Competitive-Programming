#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, k, pb, ps;
    cin>>n>>k>>pb>>ps;
    vector<ll> p(n+1);
    for(ll i=1; i<=n; i++){
        cin>>p[i];
    }
    vector<ll> a(n+1);
    for(ll i=1; i<=n; i++){
        cin>>a[i];
    }
    ll val1=0;
    ll i=0;
    ll prev=0;
    while(i<n && i<k){
        ll curr=prev+(k-i)*a[pb];
        val1=max(val1, curr);
        prev+=a[pb];
        pb=p[pb];
        i++;
    }
    ll val2=0;
    i=0;
    prev=0;
    while(i<n && i<k){
        ll curr=prev+(k-i)*a[ps];
        val2=max(val2, curr);
        prev+=a[ps];
        ps=p[ps];
        i++;
    }
    if(val1>val2){
        cout<<"Bodya"<<endl;
    }
    else if(val1<val2){
        cout<<"Sasha"<<endl;
    }
    else{
        cout<<"Draw"<<endl;
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