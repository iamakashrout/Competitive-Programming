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
    vector<ll> sums(n);
    sums[0]=s[0]-'0';
    for(ll i=1; i<n; i++){
        sums[i]=sums[i-1]+s[i]-'0';
    }
    ll carry=0;
    vector<ll> ans;
    ll i=n-1;
    while(carry>0 || i>=0){
        ll curr=carry;
        if(i>=0){
            curr+=sums[i];
        }
        ans.push_back(curr%10);
        carry=curr/10;
        i--;
    }
    while(ans.back()==0){
        ans.pop_back();
    }
    for(ll i=ans.size()-1; i>=0; i--){
        cout<<ans[i];
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