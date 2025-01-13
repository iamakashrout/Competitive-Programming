#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, k, l;
    cin>>n>>k>>l;
    k*=2;
    l*=2;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
        a[i]*=2;
    }
    ll total=a[0];
    ll pos=k;
    for(ll i=1; i<n; i++){
        if(a[i]>pos){
            a[i]=max(pos, a[i]-total);
            if((a[i]-pos)%2==0){
                total+=(a[i]-pos)/2;
                pos=(pos+a[i])/2+k;
            }
        }
        else{
            a[i]=min(pos, a[i]+total);
            if(pos<=a[i]+k){
                pos=a[i]+k;
            }
        }
    }
    if(pos<l){
        total+=(l-pos);
    }
    cout<<total<<endl;
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