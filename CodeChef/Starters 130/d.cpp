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
    ll ans=0;
    vector<ll> v;
    ll curr=0;
    for(ll i=0; i<n; i+=2){
        if(s[i]==s[i+1]){
            continue;
        }
        else{
            ans++;
            if(curr==0){
                if(s[i]=='0'){
                    v.push_back(i+1);
                }
                else{
                    v.push_back(i+2);
                }
                curr=1;
            }
            else{
                if(s[i]=='1'){
                    v.push_back(i+1);
                }
                else{
                    v.push_back(i+2);
                }
                curr=0;
            }
        }
    }
    cout<<ans<<endl;
    for(ll i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
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