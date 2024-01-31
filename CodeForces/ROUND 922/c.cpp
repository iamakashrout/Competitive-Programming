#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1e9+7

string binary(ll n){
    string ans="";
    while(n>0){
        if(n%2==1){
            ans='1'+ans;
        }
        else{
            ans='0'+ans;
        }
        n=n/2;
    }
    while(ans.size()<64){
        ans='0'+ans;
    }
    return ans;
}

void solve(){
    ll a, b, r;
    cin>>a>>b>>r;
    string A=binary(a);
    string B=binary(b);
    if(a<b){
        string temp=A;
        A=B;
        B=temp;
    }
    ll val=0;
    ll diff=0;
    if(a>=b){
        diff=a-b;
    }
    else{
        diff=b-a;
    }
    ll pow=1;
    ll index=0;
    for(ll i=0; i<64; i++){
        if(A[i]=='1'){
            index=i;
            break;
        }
    }
    for(ll i=0; i<64; i++){
        if(A[i]=='1' && B[i]=='0'){
            index=i;
            break;
        }
    }
    for(ll i=63; i>index+1; i--){
        pow=pow+pow;
    }
    ll i=index+1;
    while(val<r && i<64){
        if(A[i]=='1' && B[i]=='0'){
            if((val+pow)<=r){
                diff-=pow;
                diff-=pow;
                val+=pow;
            }
        }
        i++;
        pow/=2;
    }
    cout<<diff<<endl;
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