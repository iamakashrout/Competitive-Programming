#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1e9+7

void solve(){
    ll n, k, m;
    cin>>n>>k>>m;
    string s;
    cin>>s;
    set<char> set1;
    ll count=0;
    string ans="";
    for(ll i=0; i<m; i++){
        set1.insert(s[i]);
        if(set1.size()==k){
            ans+=s[i];
            set1.clear();
            count++;
            if(count==n){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
    char x='.';
    for(ll i=0; i<k; i++){
        char c='a'+i;
        if(set1.find(c)==set1.end()){
            x=c;
            break;
        }
    }
    for(ll i=count; i<n; i++){
        ans+=x;
    }
    cout<<ans<<endl;
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