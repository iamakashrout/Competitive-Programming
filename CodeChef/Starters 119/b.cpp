#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1e9+7

void solve(){
    ll n, q;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<char> v(q);
    for(ll i=0; i<q; i++){
        cin>>v[i];
    }
    ll ans=1;
    ll count=1;
    for(ll i=1; i<n; i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else{
            count=1;
        }
        ans=max(ans, count);
    }
    cout<<ans<<" ";
    for(int i=0; i<q; i++){
        if(v[i]==s.back()){
            count++;
        }
        else{
            count=1;
        }
        s.push_back(v[i]);
        ans=max(ans, count);
        cout<<ans<<" ";
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