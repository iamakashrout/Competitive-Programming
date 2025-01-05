#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

string binary(ll x){
    string ans="";
    while(x>0){
        if(x%2==0){
            ans='0'+ans;
        }
        else{
            ans='1'+ans;
        }
        x/=2;
    }
    while(ans.size()<32){
        ans='0'+ans;
    }
    return ans;
}

void solve(){
    ll l, r;
    cin>>l>>r;
    string L=binary(l);
    string R=binary(r);
    ll ind=-1;
    ll a=0;
    ll b=0;
    for(ll i=0; i<32; i++){
        if(R[i]!=L[i]){
            ind=i;
            break;
        }
        else{
            a=2*a+(L[i]=='1');
            b=2*b+(L[i]=='1');
        }
    }
    for(ll i=ind; i<32; i++){
        if(i==ind){
            a=2*a+1;
        }
        else{
            a=2*a;
        }
    }
    for(ll i=ind; i<32; i++){
        if(i==ind){
            b=2*b;
        }
        else{
            b=2*b+1;
        }
    }
    ll c;
    if(b-1>=l){
        c=b-1;
    }
    else{
        c=a+1;
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
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