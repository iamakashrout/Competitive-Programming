#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll k, l1, r1, l2, r2;
    cin>>k>>l1>>r1>>l2>>r2;
    if(r2<l1){
        cout<<0<<endl;
        return;
    }
    if(r1>r2){
        r1=r2;
    }
    if(l2<l1){
        l2=l1;
    }
    ll ans=0;
    if(r1>=l2){
        ans+=(r1-l2+1);
    }
    ll curr=k;
    while(curr<=1e10){
        if(l2>r1*curr){
            curr*=k;
            continue;
        }
        if(l1*curr>r2){
            curr*=k;
            continue;
        }
        ll mn=0;
        if(l1*curr<l2){
            mn=l2;
            if(l2%curr!=0){
                mn+=(curr-l2%curr);
            }
            if(mn/curr>r1){
                curr*=k;
                continue;
            }
        }
        else{
            mn=l1*curr;
        }
        ll mx=0;
        if(r1*curr<=r2){
            mx=r1*curr;
        }
        else{
            mx=r2;
            if(r2%curr!=0){
                mx-=(r2%curr);
            }
            if(mx/curr<l1){
                curr*=k;
                continue;
            }
        }
        if(mx<mn){
            curr*=k;
            continue;
        }
        ans+=((mx-mn)/curr+1);
        curr*=k;
    }
    cout<<ans<<endl;
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