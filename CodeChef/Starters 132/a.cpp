#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, m;
    cin>>n>>m;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    vector<ll> b(m);
    for(ll i=0; i<m; i++){
        cin>>b[i];
    }
    if(n<4 || m<4 || n+m<11){
        cout<<-1<<endl;
        return;
    }
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    ll ans=a[0]+a[1]+a[2]+a[3]+b[0]+b[1]+b[2]+b[3];
    ll i=4, j=4;
    ll count=0;
    while(i<n && j<m && count<3){
        if(a[i]>b[j]){
            ans+=a[i];
            i++;
            count++;
        }
        else{
            ans+=b[j];
            j++;
            count++;
        }
    }
    while(count<3 && i<n){
        ans+=a[i];
        i++;
        count++;
    }
    while(count<3 && j<m){
        ans+=b[j];
        j++;
        count++;
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