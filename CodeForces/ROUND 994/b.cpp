#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll Slast=-1;
    ll Sfirst=-1;
    ll Plast=-1;
    ll Pfirst=-1;
    ll sCount=0;
    ll pCount=0;
    for(ll i=0; i<n; i++){
        if(s[i]=='s'){
            sCount++;
            if(Sfirst==-1){
                Sfirst=i;
            }
            Slast=i;
        }
        else if(s[i]=='p'){
            pCount++;
            if(Pfirst==-1){
                Pfirst=i;
            }
            Plast=i;
        }
    }
    // cout<<Pfirst<<" "<<Slast<<endl;
    if(sCount==0 || pCount==0){
        cout<<"YES"<<endl;
        return;
    }
    if(Pfirst<Slast){
        cout<<"NO"<<endl;
        return;
    }
    for(ll i=0; i<n; i++){
        if(s[i]=='s'){
            for(ll j=n-1; j>i; j--){
                if(s[j]=='p'){
                    ll comp=j-i+1;
                    ll sVal=n-i;
                    ll pVal=j+1;
                    if(sVal>comp && pVal>comp){
                        cout<<"NO"<<endl;
                        return;
                    }
                }
            }
        }
    }
    // if(n-Sfirst>Pfirst+1){
    //     cout<<"NO"<<endl;
    //     return;
    // }
    // if(Plast+1>n-Slast){
    //     cout<<"NO"<<endl;
    //     return;
    // }
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