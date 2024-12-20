#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

string xorFunc(string& x, string& y){
    string ans="";
    for(ll i=x.size()-1; i>=0; i--){
        if(x[i]!=y[i]){
            ans='1'+ans;
        }
        else{
            ans='0'+ans;
        }
    }
    return ans;
}

void solve(){
    string s;
    cin>>s;
    ll n=s.size();
    ll ind=-1;
    for(ll i=0; i<n; i++){
        if(s[i]=='0'){
            ind=i;
            break;
        }
    }
    if(ind==-1){
        cout<<1<<" "<<n<<" "<<n<<" "<<n<<endl;
        return;
    }
    string Xor="0";
    ll ind1=-1, ind2=-1;
    ll rem=n-ind;
    string remStr=s.substr(ind, rem);
    for(ll i=0; i<=n-rem; i++){
        string curr=s.substr(i, rem);
        string res=xorFunc(remStr, curr);
        if(res>Xor){
            Xor=res;
            ind1=i+1;
            ind2=i+rem-1+1;
        }
    }
    cout<<1<<" "<<n<<" "<<ind1<<" "<<ind2<<endl;
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