#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, q;
    cin>>n>>q;
    vector<ll> a(n);
    ll sum=0;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        sum+=(2*a[i]);
    }
    sort(a.begin(), a.end());
    while(q--){
        ll x;
        cin>>x;
        ll curr=sum;
        bool found=false;
        vector<ll> v;
        for(ll i=0; i<n; i++){
            ll e=curr-a[i];
            for(ll j=0; j<n; j++){
                if(j==i){
                    continue;
                }
                ll f=e-a[j];
                if(f==x){
                    v={i, j};
                    found=true;
                    break;
                }
            }
            if(found==true){
                break;
            }
        }
        if(found==false){
            cout<<-1<<endl;
        }
        else{
            cout<<a[v[0]]<<" ";
            for(ll i=0; i<n; i++){
                if(i==v[0] || i==v[1]){
                    continue;
                }
                cout<<a[i]<<" ";
            }
            cout<<a[v[1]]<<endl;
        }
    }
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