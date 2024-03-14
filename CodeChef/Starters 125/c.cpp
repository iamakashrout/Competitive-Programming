#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll odd=0;
    ll even=0;
    ll ones=0;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2==1){
            odd++;
        }
        else{
            even++;
        }
        if(a[i]==1){
            ones++;
        }
    }
    ll alice=(ones+1)/2;
    ll bob=(ones)/2;
    odd-=ones;
    if(odd==0 && even==0){
        if(alice>bob){
            cout<<"Alice"<<endl;
            return;
        }
        cout<<"Draw"<<endl;
        return;
    }
    if(alice==bob){
        if(odd%2==1){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }
    else if(alice>bob){
        if(odd%2==0){
            cout<<"Alice"<<endl;
        }
        else{
            if(odd+even==1){
                cout<<"Draw"<<endl;
            }
            else{
                cout<<"Bob"<<endl;
            }
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