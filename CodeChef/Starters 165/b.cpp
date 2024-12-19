#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    stack<ll> st;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        while(!st.empty() && a[st.top()]<a[i]){
            st.pop();
        }
        st.push(i);
    }
    stack<ll> newSt;
    while(!st.empty()){
        newSt.push(st.top());
        st.pop();
    }
    ll prev=0;
    ll ans=0;
    while(!newSt.empty()){
        ans=max(newSt.top()-prev, ans);
        prev=newSt.top()+1;
        newSt.pop();
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