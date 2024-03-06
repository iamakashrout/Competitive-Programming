#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    bool forward=true;
    ll i=0, j=s.size()-1;
    while(i<j){
        if(s[i]>s[j]){
            forward=false;
            break;
        }
        else if(s[i]<s[j]){
            break;
        }
        i++;
        j--;
    }
    if(forward==true){
        cout<<s<<endl;
    }
    else{
        string temp=s;
        reverse(temp.begin(), temp.end());
        cout<<temp+s<<endl;
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