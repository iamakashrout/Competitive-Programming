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
    map<ll, ll> mpA, mpB;
    set<ll, greater<ll>> setA, setB;
    for(ll i=0; i<n; i++){
        mpA[a[i]]++;
        setA.insert(a[i]);
    }
    for(ll i=0; i<m; i++){
        mpB[b[i]]++;
        setB.insert(b[i]);
    }
    while(true){
        if(setA.empty() && setB.empty()){
            cout<<"Yes"<<endl;
            return;
        }
        if(setA.empty() || setB.empty()){
            cout<<"No"<<endl;
            return;
        }
        ll mxA=*(setA.begin());
        ll mxB=*(setB.begin());
        if(mxA>mxB){
            cout<<"No"<<endl;
            return;
        }
        if(mpA[mxB]>0){
            ll count=min(mpA[mxB], mpB[mxB]);
            mpA[mxB]-=count;
            mpB[mxB]-=count;
            if(mpA[mxB]==0){
                setA.erase(mxB);
            }
            if(mpB[mxB]==0){
                setB.erase(mxB);
            }
        }
        else{
            ll first=mxB/2;
            ll second=(mxB+1)/2;
            mpB[first]+=mpB[mxB];
            mpB[second]+=mpB[mxB];
            setB.insert(first);
            setB.insert(second);
            mpB[mxB]=0;
            setB.erase(mxB);
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