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
    ll my=a[0];
    vector<ll> A;
    for(ll i=0; i<n; i++){
        if(a[i]>my){
            A.push_back(a[i]);
        }
    }
    if(A.size()>0){
        sort(A.begin(), A.end());
    }
    ll mx=0;
    if(A.size()>0){
        mx=A[A.size()-1];
    }
    vector<ll> B;
    for(ll i=0; i<m; i++){
        if(b[i]>my && b[i]<=mx){
            B.push_back(b[i]);
        }
    }
    if(B.size()>0){
        sort(B.begin(), B.end());
    }
    vector<ll> better(B.size());
    ll i=0, j=0;
    ll count=A.size();
    while(j<B.size()){
        while(i<A.size() && A[i]<B[j]){
            i++;
            count--;
        }
        better[j]=count;
        j++;
    }
    // for(ll i=0; i<better.size(); i++){
    //     cout<<better[i]<<" ";
    // }
    // cout<<endl;
    for(ll curr=1; curr<=m; curr++){
        ll rem=m%curr;
        ll ind=rem;
        ll ans=m/curr;
        for(ll i=ind; i<better.size(); i+=curr){
            ans+=better[i];
        }
        cout<<ans<<" ";
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