#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, m, q;
    cin>>n>>m>>q;
    vector<ll> a(n);
    ll Asum=0;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        Asum+=a[i];
    }
    vector<ll> b(m);
    ll Bsum=0;
    for(ll i=0; i<m; i++){
        cin>>b[i];
        Bsum+=b[i];
    }
    map<ll, ll> mpA;
    for(ll i=0; i<n; i++){
        mpA[Asum-a[i]]++;
    }
    map<ll, ll> mpB;
    for(ll i=0; i<m; i++){
        mpB[Bsum-b[i]]++;
    }
    while(q--){
        ll x;
        cin>>x;
        ll X=abs(x);
        bool check=false;
        for(ll i=1; i<=sqrt(X); i++){
            if(X%i==0){
                if(x>0){
                    if((mpA[i]>0 && mpB[X/i]>0) || (mpA[X/i]>0 && mpB[i]>0)){
                        check=true;
                        break;;
                    }
                    if((mpA[-i]>0 && mpB[-X/i]>0) || (mpA[-X/i]>0 && mpB[-i]>0)){
                        check=true;
                        break;;
                    }
                }
                else{
                    if((mpA[i]>0 && mpB[-X/i]>0) || (mpA[X/i]>0 && mpB[-i]>0)){
                        check=true;
                        break;;
                    }
                    if((mpA[-i]>0 && mpB[X/i]>0) || (mpA[-X/i]>0 && mpB[i]>0)){
                        check=true;
                        break;;
                    }
                }
            }
        }
        if(check){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}