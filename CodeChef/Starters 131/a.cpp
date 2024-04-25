#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> a(n);
    ll sum=0;
    vector<ll> diff;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
        if(7-a[i]>a[i]){
            diff.push_back(7-2*a[i]);
        }
    }
    sort(diff.rbegin(), diff.rend());
    ll i=0;
    while(i<k && i<diff.size()){
        sum+=diff[i];
        i++;
    }
    cout<<sum<<endl;
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