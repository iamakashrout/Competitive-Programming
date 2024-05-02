#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll ones=0;
    ll twos=0;
    vector<ll> oneCount(n+1, 0);
    vector<ll> twoCount(n+1, 0);
    for(ll i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==1){
            ones++;
        }
        else if(a[i]==2){
            twos++;
        }
        oneCount[i+1]=ones;
        twoCount[i+1]=twos;
    }
    ll q;
    cin>>q;
    while(q--){
        ll l, r, k;
        cin>>l>>r>>k;
        ll O=oneCount[r]-oneCount[l-1];
        ll T=twoCount[r]-twoCount[l-1];
        ll rem=r-l+1-O-T;
        ll X=max(O, T);
        ll Y=min(O, T);
        if(k<=rem){
            if(k<=X-Y){
                cout<<X*(Y+k)<<endl;
            }
            else{
                ll diff=k-(X-Y);
                ll newX=X+diff/2;
                ll newY=X+(diff+1)/2;
                cout<<newX*newY<<endl;
            }
        }
        else{
            if(rem>=X-Y){
                ll diff=rem-(X-Y);
                ll newX=X+diff/2;
                ll newY=X+(diff+1)/2;
                cout<<newX*newY<<endl;
            }
            else{
                ll newX=X;
                ll newY=Y+rem;
                ll diff=k-rem;
                ll newDiff=newX-newY;
                newX-=min(diff, newDiff/2);
                newY+=min(diff, newDiff/2);
                cout<<newX*newY<<endl;
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