#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    string a;
    cin>>a;
    string b;
    cin>>b;
    vector<ll> A;
    vector<ll> C;
    vector<ll> B(n, 0);
    for(ll i=0; i<n; i++){
        if(a[i]=='b'){
            B[i]=1;
        }
        if(i>0){
            B[i]+=B[i-1];
        }
    }
    for(ll i=0; i<n; i++){
        if((a[i]=='b' && b[i]!='b') || (a[i]!='b' && b[i]=='b')){
            cout<<"No"<<endl;
            return;
        }
        if(a[i]=='a' && b[i]=='c'){
            A.push_back(i);
        }
        if(a[i]=='c' && b[i]=='a'){
            C.push_back(i);
        }
    }
    if(A.size()!=C.size()){
        cout<<"No"<<endl;
        return;
    }
    ll i=0, j=0;
    while(i<A.size() && j<C.size()){
        if(A[i]>C[j]){
            cout<<"No"<<endl;
            return;
        }
        if(B[A[i]]==B[C[j]]){
            cout<<"No"<<endl;
            return;
        }
        i++;
        j++;
    }
    cout<<"Yes"<<endl;
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