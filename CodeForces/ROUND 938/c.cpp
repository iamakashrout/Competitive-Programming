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
    for(ll i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum<=k){
        cout<<n<<endl;
        return;
    }
    ll prefix=0;
    ll ind1=-1;
    for(ll i=0; i<n; i++){
        if(prefix+a[i]<=(k+1)/2){
            prefix+=a[i];
        }
        else{
            ind1=i;
            break;
        }
    }
    ll suffix=0;
    ll ind2=-1;
    for(ll i=n-1; i>=0; i--){
        if(suffix+a[i]<=k/2){
            suffix+=a[i];
        }
        else{
            ind2=i;
            break;
        }
    }
    ll ans=ind1+n-ind2-1;
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