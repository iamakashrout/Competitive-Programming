#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    string x;
    cin>>x;
    string y;
    cin>>y;
    ll n=x.size();
    ll index=-1;
    for(ll i=0; i<n; i++){
        if(x[i]!=y[i]){
            index=i;
            break;
        }
    }
    if(index==-1){
        cout<<x<<endl;
        cout<<y<<endl;
        return;
    }
    if(x[index]>y[index]){
        for(ll i=index+1; i<n; i++){
            if(x[i]>y[i]){
                swap(x[i], y[i]);
            }
        }
        cout<<x<<endl;
        cout<<y<<endl;
    }
    else{
        for(ll i=index+1; i<n; i++){
            if(x[i]<y[i]){
                swap(x[i], y[i]);
            }
        }
        cout<<x<<endl;
        cout<<y<<endl;
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