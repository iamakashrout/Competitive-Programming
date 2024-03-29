#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

ll N=1e5;
vector<ll> check(N+1, 0);
vector<ll> binary;
void helper(){
    for(ll i=1; i<=N; i++){
        string s=to_string(i);
        bool flag=true;
        for(ll j=0; j<s.size(); j++){
            if(s[j]!='0' && s[j]!='1'){
                flag=false;
                break;
            }
        }
        if(flag==true){
            binary.push_back(i);
            check[i]=1;
        }
    }
    for(ll i=1; i<=N; i++){
        if(check[i]==true){
            for(ll j=0; j<binary.size(); j++){
                if(i*binary[j]>N){
                    break;
                }
                check[i*binary[j]]=1;
            }
        }
    }
}

void solve(){
    ll n;
    cin>>n;
    if(check[n]){
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
    helper();
    while(t--){
        solve();
    }
    return 0;
}