#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, m, q;
    cin>>n>>m>>q;
    vector<pair<ll, ll>> segments({{1, -q}, {m, m}, {n+q+1, n}});
    while(q--){
        ll a;
        cin>>a;
        bool mid=false;
        for(auto &s: segments){
            if(a<s.first){
                s.first=max(1ll, s.first-1);
            }
            else if(a>s.second){
                s.second=min(n, s.second+1);
            }
            else{
                mid=true;
                if(s.first==s.second){
                    s.first=n+1;
                    s.second=-1;
                }
            }
        }
        if(mid){
            segments[0]={1, max(segments[0].second, 1ll)};
            segments[2]={min(segments[2].first, n), n};
        }
        ll ans=0;
        ll l=0, r=-1;
        for(auto& s: segments){
            if(s.first>s.second){
                continue;
            }
            if(s.first>r){
                ans+=max(0ll, r-l+1);
                l=s.first;
                r=s.second;
            }
            r=max(r, s.second);
        }
        ans+=max(0ll, r-l+1);
        cout<<ans<<" ";
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