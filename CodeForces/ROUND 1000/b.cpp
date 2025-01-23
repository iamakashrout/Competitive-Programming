#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, l, r;
    cin>>n>>l>>r;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    vector<ll> first;
    for(ll i=0; i<l-1; i++){
        first.push_back(a[i]);
    }
    sort(first.begin(), first.end());
    vector<ll> second;
    for(ll i=r; i<n; i++){
        second.push_back(a[i]);
    }
    sort(second.begin(), second.end());
    vector<ll> v;
    ll sum=0;
    for(ll i=l-1; i<=r-1; i++){
        v.push_back(a[i]);
        sum+=a[i];
    }
    sort(v.rbegin(), v.rend());
    ll diff1=0;
    ll i=0, j=0;
    ll curr=0;
    while(i<first.size() && j<v.size()){
        curr-=v[j];
        curr+=first[i];
        diff1=min(diff1, curr);
        i++;
        j++;
    }
    ll diff2=0;
    i=0, j=0;
    curr=0;
    while(i<second.size() && j<v.size()){
        curr-=v[j];
        curr+=second[i];
        diff2=min(diff2, curr);
        i++;
        j++;
    }
    ll diff=min(diff1, diff2);
    cout<<sum+diff<<endl;
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