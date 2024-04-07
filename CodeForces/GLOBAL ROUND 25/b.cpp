#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, k;
    cin>>n>>k;
    k--;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    ll index=-1;
    for(ll i=0; i<k; i++){
        if(a[i]>a[k]){
            index=i;
            break;
        }
    }
    swap(a[0], a[k]);
    ll ans1=0;
    for(ll i=1; i<n; i++){
        if(a[i]<a[0]){
            ans1++;
        }
        else{
            break;
        }
    }
    if(index==-1){
        cout<<ans1<<endl;
        return;
    }
    swap(a[0], a[k]);
    swap(a[index], a[k]);
    ll ans2=index>0;
    for(ll i=index+1; i<n; i++){
        if(a[i]<a[index]){
            ans2++;
        }
        else{
            break;
        }
    }
    cout<<max(ans1, ans2)<<endl;
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