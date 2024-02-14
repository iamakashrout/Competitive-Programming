#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, m;
    cin>>n>>m;
    vector<ll> a(n);
    vector<ll> zeros;
    ll digits=0;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        ll c=0;
        while(a[i]%10==0){
            a[i]/=10;
            c++;
        }
        zeros.push_back(c);
        while(a[i]>0){
            a[i]/=10;
            c++;
        }
        digits+=c;
    }
    sort(zeros.rbegin(), zeros.rend());
    ll ans=digits;
    for(ll i=0; i<n; i+=2){
        ans-=zeros[i];
    }
    if(ans>=m+1){
        cout<<"Sasha"<<endl;
    }
    else{
        cout<<"Anna"<<endl;
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