#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

bool twosPower(ll n){
    while(n%2==0 && n>0){
        n/=2;
        if(n==1){
            return true;
        }
    }
    return false;
}

void solve(){
    ll n, s;
    cin>>n>>s;
    if(s%2==1 || n>s || n==1){
        cout<<-1<<endl;
        return;
    }
    if(n%2==0){
        n-=2;
        if(s/2-n/2<1){
            cout<<-1<<endl;
            return;
        }
        cout<<s/2-n/2<<" "<<s/2-n/2;
        while(n--){
            cout<<" "<<1;
        }
        cout<<endl;
    }
    else{
        if(n==3){
            if(twosPower(s)){
                cout<<-1<<endl;
                return;
            }
            int firstBit=1;
            int x=32;
            while(!((s/2)&firstBit) && x--){
                firstBit<<=1;
            }
            cout<<s/2<<" "<<s/2-firstBit<<" "<<firstBit<<endl;;
            return;
        }
        if(s-n<3){
            cout<<-1<<endl;
            return;
        }
        n-=3;
        s-=6;
        if(n>s){
            cout<<-1<<endl;
            return;
        }
        cout<<1<<" "<<2<<" "<<3<<" ";
        n-=2;
        cout<<s/2-n/2<<" "<<s/2-n/2;
        for(ll i=0; i<n; i++){
            cout<<" "<<1;
        }
        cout<<endl;
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