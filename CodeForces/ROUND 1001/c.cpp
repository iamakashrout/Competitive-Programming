#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

vector<ll> diff(vector<ll>& a){
    vector<ll> res;
    for(ll i=1; i<a.size(); i++){
        res.push_back(a[i]-a[i-1]);
    }
    return res;
}

ll sum(vector<ll>& a){
    ll res=0;
    for(ll i=0; i<a.size(); i++){
        res+=a[i];
    }
    return res;
}

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll ans=0;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        ans+=a[i];
    }
    while(a.size()>1){
        vector<ll> diff1=diff(a);
        reverse(a.begin(), a.end());
        vector<ll> diff2=diff(a);
        ll sum1=sum(diff1);
        ll sum2=sum(diff2);
        if(sum1>=sum2){
            a=diff1;
            ans=max(ans, sum1);
        }
        else{
            a=diff2;
            ans=max(ans, sum2);
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