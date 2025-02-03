#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    map<ll, ll> mpA;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        mpA[a[i]]++;
    }
    vector<ll> b(n);
    map<ll, ll> mpB;
    for(ll i=0; i<n; i++){
        cin>>b[i];
        mpB[b[i]]++;
    }
    if(mpA.size()>=3 || mpB.size()>=3 || (mpA.size()>=2 && mpB.size()>=2)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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