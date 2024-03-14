#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    vector<ll> b(n);
    for(ll i=0; i<n; i++){
        cin>>b[i];
    }
    vector<ll> prefixA(n);
    prefixA[0]=a[0];
    vector<ll> oddA;
    vector<ll> evenA;
    oddA.push_back(prefixA[0]);
    vector<ll> prefixB(n);
    prefixB[0]=b[0];
    vector<ll> oddB;
    vector<ll> evenB;
    oddB.push_back(prefixB[0]);
    for(ll i=1; i<n; i++){
        prefixA[i]=prefixA[i-1]+a[i];
        prefixB[i]=prefixB[i-1]+b[i];
        if(i%2==0){
            oddA.push_back(prefixA[i]);
            oddB.push_back(prefixB[i]);
        }
        else{
            evenA.push_back(prefixA[i]);
            evenB.push_back(prefixB[i]);
        }
    }
    if(prefixA[n-1]!=prefixB[n-1]){
        cout<<"NO"<<endl;
        return;
    }
    sort(oddA.begin(), oddA.end());
    sort(oddB.begin(), oddB.end());
    sort(evenA.begin(), evenA.end());
    sort(evenB.begin(), evenB.end());
    for(ll i=0; i<oddA.size(); i++){
        if(oddA[i]!=oddB[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    for(ll i=0; i<evenA.size(); i++){
        if(evenA[i]!=evenB[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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