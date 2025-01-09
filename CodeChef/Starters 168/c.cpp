#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    map<ll, ll> last;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        last[a[i]]=i;
    }
    // for(auto it=last.begin(); it!=last.end(); it++){
    //     cout<<it->second<<" ";
    // }
    // cout<<endl;
    ll ans=0;
    ll count=0;
    ll open=0;
    map<ll, ll> mp;
    for(ll i=0; i<n; i++){
        // cout<<"init "<<mp[a[i]]<<endl;
        if(mp[a[i]]==0){
            open++;
        }
        mp[a[i]]++;
        if(last[a[i]]==i){
            open--;
        }
        // cout<<"open "<<open<<endl;
        if(open==0){
            if(mp.size()==1 && mp[a[i]]==1){
                mp.clear();
                continue;
            }
            ans+=mp.size();
            mp.clear();
        }
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