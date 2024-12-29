#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=998244353;

ll find(ll x){
    ll y=mod-2;
    ll ans=1;
    while(y>0){
        if(y%2==1){
            ans=((ans%mod)*(x%mod))%mod;
        }
        x=((x%mod)*(x%mod))%mod;
        y/=2;
    }
    return ans;
}

void solve(){
    ll n, q;
    cin>>n>>q;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    vector<ll> b(n);
    for(ll i=0; i<n; i++){
        cin>>b[i];
    }
    vector<ll> A=a;
    vector<ll> B=b;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    ll prod=1;
    for(ll i=0; i<n; i++){
        prod=((prod%mod)*(min(A[i], B[i])%mod))%mod;
    }
    cout<<prod<<" ";
    while(q>0){
        ll o, x;
        cin>>o>>x;
        x--;
        if(o==1){
            ll ind=upper_bound(A.begin(), A.end(), a[x])-A.begin()-1;
            if(A[ind]<B[ind]){
                prod=(((prod%mod)*(find(A[ind])%mod))%mod)*((A[ind]+1)%mod)%mod;
            }
            A[ind]++;
            a[x]++;
        }
        else{
            ll ind=upper_bound(B.begin(), B.end(), b[x])-B.begin()-1;
            if(B[ind]<A[ind]){
                prod=(((prod%mod)*(find(B[ind])%mod))%mod)*((B[ind]+1)%mod)%mod;
            }
            B[ind]++;
            b[x]++;;
        }
        cout<<prod<<" ";
        q--;
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}