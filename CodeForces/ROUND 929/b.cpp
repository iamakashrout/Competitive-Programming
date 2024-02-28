#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll sum=0;
    ll one=0;
    ll two=0;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]%3==1){
            one++;
        }
        if(a[i]%3==2){
            two++;
        }
    }
    if(sum%3==0){
        cout<<0<<endl;
        return;
    }
    if(sum%3==1){
        if(one>0){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    else{
        cout<<1<<endl;
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