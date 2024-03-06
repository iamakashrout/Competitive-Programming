#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    vector<ll> v(n+1, 0);
    for(ll i=0; i<n; i++){
        cin>>a[i];
        v[a[i]]++;
    }
    ll mex=-1;
    for(ll i=0; i<=n; i++){
        if(v[i]==0){
            mex=i;
            break;
        }
    }
    for(ll i=0; i<mex; i++){
        if(v[i]<2){
            cout<<-1<<endl;
            return;
        }
    }
    ll count=0;
    map<ll, bool> mp;
    ll index=-1;
    for(ll i=0; i<n; i++){
        if(a[i]<mex){
            if(!mp[a[i]]){
                mp[a[i]]=true;
                count++;
            }
        }
        if(count==mex){
            index=i;
            break;
        }
    }
    if(index==-1){
        cout<<-1<<endl;
        return;
    }
    ll count2=0;
    map<ll, bool> mp2;
    bool solve=false;
    for(ll i=index+1; i<n; i++){
        if(a[i]<mex){
            if(!mp2[a[i]]){
                mp2[a[i]]=true;
                count2++;
            }
        }
        if(count2==mex){
            solve=true;
            break;
        }
    }
    if(solve==false){
        cout<<-1<<endl;
    }
    else{
        cout<<2<<endl;
        cout<<1<<" "<<index+1<<endl;
        cout<<index+2<<" "<<n<<endl;
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