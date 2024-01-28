#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1e9+7

void solve(){
    ll x;
    cin>>x;
    string num="";
    while(x>0){
        if(x%2==1){
            num='1'+num;
        }
        else{
            num='0'+num;
        }
        x=x/2;
    }
    string a="";
    string b="";
    for(ll i=0; i<num.size(); i++){
        if(i==0){
            a+='1';
            b+='0';
            continue;
        }
        if(num[i]=='0'){
            a+='0';
            b+='0';
        }
        else{
            a+='0';
            b+='1';
        }
    }
    ll A=0, B=0;
    ll a1=a.size()-1;
    ll ind1=1;
    while(a1>=0){
        A+=(ind1*(a[a1]-'0'));
        ind1*=2;
        a1--;
    }
    ll b1=b.size()-1;
    ll ind2=1;
    while(b1>=0){
        B+=(ind2*(b[b1]-'0'));
        ind2*=2;
        b1--;
    }
    cout<<B<<" "<<A<<endl;
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