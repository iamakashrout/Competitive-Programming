#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll ind=n;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        if(a[i]!=1 && a[i]!=-1){
            ind=i;
        }
    }
    map<ll, ll> mp;
    mp[0]=1;
    ll posSum=0;
    ll negSum=0;
    for(ll i=0; i<ind; i++){
        posSum=max(posSum+a[i], 0ll);
        negSum=min(negSum+a[i], 0ll);
        mp[posSum]++;
        mp[negSum]++;
    }
    posSum=0;
    negSum=0;
    for(ll i=n-1; i>ind; i--){
        posSum=max(posSum+a[i], 0ll);
        negSum=min(negSum+a[i], 0ll);
        mp[posSum]++;
        mp[negSum]++;
    }
    if(ind==n){
        cout<<mp.size()<<endl;
        for(auto it=mp.begin(); it!=mp.end(); it++){
            if(it->second>0){
                cout<<it->first<<" ";
            }
        }
        cout<<endl;
        return;
    }
    mp[a[ind]]=1;
    ll mx=0;
    ll mn=0;
    ll sum=0;
    for(ll i=ind-1; i>=0; i--){
        sum+=a[i];
        mx=max(mx, sum);
        mn=min(mn, sum);
    }
    for(ll i=1; i<=mx; i++){
        mp[a[ind]+i]++;
    }
    for(ll i=1; i<=abs(mn); i++){
        mp[a[ind]-i]++;
    }
    sum=0;
    for(ll i=ind+1; i<n; i++){
        sum+=a[i];
        mp[a[ind]+mx+sum]++;
        mp[a[ind]+mn+sum]++;
    }
    cout<<mp.size()<<endl;
    for(auto it=mp.begin(); it!=mp.end(); it++){
        if(it->second>0){
            cout<<it->first<<" ";
        }
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