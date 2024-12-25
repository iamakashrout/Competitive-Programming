#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll l, r, g;
    cin>>l>>r>>g;
    ll L=l;
    if(l%g!=0){
        L+=(g-l%g);
    }
    ll R=r-r%g;
    if(R<L){
        cout<<-1<<" "<<-1<<endl;
        return;
    }
    if(L==R && L!=g){
        cout<<-1<<" "<<-1<<endl;
        return;
    }
    ll A=L/g;
    ll B=R/g;
    ll ind1=-1, ind2=-1;
    ll mx=-1;
    for(ll i=A; i<=min(A+200, B); i++){
        for(ll j=B; j>=i; j--){
            if(__gcd(i, j)==1){
                if((j-i)>mx){
                    mx=j-i;
                    ind1=i;
                    ind2=j;
                }
                break;
            }
        }
    }
    cout<<ind1*g<<" "<<ind2*g<<endl;
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