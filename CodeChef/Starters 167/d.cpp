#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> v;
    for(ll i=1; i<=n/2; i++){
        v.push_back(i);
    }
    for(ll i=n/2+1; i<=n; i++){
        v.push_back(i);
    }
    ll curr=0;
    ll curr2=0;
    while(curr<n/2){
        for(ll i=0; i<n; i++){
            if(i<n/2){
                cout<<v[(i+curr2)%(n/2)]<<" ";
            }
            else{
                cout<<v[n/2+(i+curr)%(n/2)]<<" ";
            }
        }
        cout<<endl;
        curr++;
        curr2+=(n/2-1);
    }
    vector<ll> v1;
    for(ll i=n/2+1; i<=n; i++){
        v1.push_back(i);
    }
    for(ll i=1; i<=n/2; i++){
        v1.push_back(i);
    }
    curr=0;
    curr2=0;
    while(curr<n/2){
        for(ll i=0; i<n; i++){
            if(i>=n/2){
                cout<<v1[n/2+(i+curr2)%(n/2)]<<" ";
            }
            else{
                cout<<v1[(i+curr)%(n/2)]<<" ";
            }
        }
        cout<<endl;
        curr++;
        curr2+=(n/2-1);
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