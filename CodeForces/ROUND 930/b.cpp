#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    string a;
    cin>>a;
    string b;
    cin>>b;
    ll ans=1;
    string s="";
    s+=a[0];
    ll i=0;
    bool down=false;
    ll prev=0;
    while(s.size()<n){
        if(a[i+1]=='0' && b[i]=='1'){
            s+='0';
            prev=0;
        }
        else if(a[i+1]=='1' && b[i]=='0'){
            s+='0';
            down=true;
            i++;
            break;
        }
        else{
            s+=a[i+1];
            prev++;
        }
        i++;
    }
    if(down){
        while(i<n){
            s+=b[i];
            i++;
        }
        cout<<s<<endl;
        cout<<prev+1<<endl;
    }
    else{
        s+=b[n-1];
        cout<<s<<endl;
        cout<<prev+1<<endl;
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