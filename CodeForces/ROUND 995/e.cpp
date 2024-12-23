#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

bool check(vector<ll>& a, vector<ll>& b, ll k, ll mid){
    ll n=a.size();
    ll val=0;
    ll j=0;
    for(ll i=0; i<n; i++){
        if(i>=1 && a[i]==a[i-1]){
            continue;
        }
        while(j<n && b[j]<a[i]){
            j++;
        }
        if(i-j<=k){
            val=max(val, a[i]*(n-j));
        }
    }
    j=n-1;
    for(ll i=n-1; i>=0; i--){
        if(i>=1 && b[i]==b[i-1]){
            continue;
        }
        while(j>=0 && a[j]>=b[i]){
            j--;
        }
        if(n-i-(n-j-1)<=k){
            val=max(val, b[i]*(n-i));
        }
    }
    return val>=mid;
}

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    vector<ll> b(n);
    for(ll i=0; i<n; i++){
        cin>>b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll low=0, high=4*(1e14);
    ll ans=0;
    while(low<=high){
        ll mid=(low+high)/2;
        if(check(a, b, k, mid)==true){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
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