#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, m, x;
    cin>>n>>m>>x;
    set<ll> s;
    s.insert(x);
    while(m--){
        ll r;
        char c;
        cin>>r>>c;
        set<ll> temp=s;
        s.clear();
        for(auto it=temp.begin(); it!=temp.end(); it++){
            if(c=='0'){
                ll d=((*it)+r)%n;
                if(d==0){
                    d=n;
                }
                s.insert(d);
            }
            else if(c=='1'){
                r=r%n;
                ll d=(n+(*it)-r)%n;
                if(d==0){
                    d=n;
                }
                s.insert(d);
            }
            else{
                ll d=((*it)+r)%n;
                if(d==0){
                    d=n;
                }
                s.insert(d);
                r=r%n;
                ll d1=(n+(*it)-r)%n;
                if(d1==0){
                    d1=n;
                }
                s.insert(d1);
            }
        }
    }
    cout<<s.size()<<endl;
    for(auto it=s.begin(); it!=s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
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