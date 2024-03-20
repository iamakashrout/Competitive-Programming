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
    ll left0=0;
    ll left1=0;
    ll right0=0;
    ll right1=0;
    for(ll i=0; i<n; i++){
        if(s[i]=='1'){
            right1++;
        }
        else{
            right0++;
        }
    }
    ll ans=-1;
    ll dist=INT_MAX;
    if(right1>=(n+1)/2){
        ans=0;
        dist=min(n/2, (n+1)/2);
    }
    ll count=0;
    for(ll i=0; i<n; i++){
        if(s[i]=='0'){
            left0++;
            right0--;
        }
        else{
            left1++;
            right1--;
        }
        count++;
        if(left0>=(count+1)/2 && right1>=(n-count+1)/2){
            if(ans==-1 || abs((n)/2-(i+1))<dist || abs((n+1)/2-(i+1))<dist){
                ans=i+1;
                dist=min(abs((n)/2-(i+1)), abs((n+1)/2-(i+1)));
            }
        }
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