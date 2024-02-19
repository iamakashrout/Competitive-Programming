#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    char x;
    cin>>x;
    map<char, vector<ll>> mp;
    for(ll i=0; i<2*n; i++){
        string card;
        cin>>card;
        mp[card[1]].push_back(card[0]-'0');
    }
    vector<string> ans;
    for(auto it=mp.begin(); it!=mp.end(); it++){
        if(it->first!=x){
            sort(it->second.begin(), it->second.end());
            ll i=0, j=it->second.size()-1;
            while(i<j){
                string curr="";
                char h=it->second[i]+'0';
                char g=it->second[j]+'0';
                curr.push_back(h);
                curr.push_back(it->first);
                curr.push_back(' ');
                curr.push_back(g);
                curr.push_back(it->first);
                ans.push_back(curr);
                i++;
                j--;
            }
            if(i==j){
                if(mp[x].size()==0){
                    cout<<"IMPOSSIBLE"<<endl;
                    return;
                }
                string curr="";
                curr.push_back(it->second[i]+'0');
                curr.push_back(it->first);
                curr.push_back(' ');
                curr.push_back(mp[x].back()+'0');
                curr.push_back(x);
                ans.push_back(curr);
                mp[x].pop_back();
            }
        }
    }
    if(!mp[x].empty()){
        if(mp[x].size()%2==1){
            cout<<"IMPOSSIBLE"<<endl;
            return;
        }
        sort(mp[x].begin(), mp[x].end());
        ll i=0, j=mp[x].size()-1;
        while(i<j){
            string curr="";
            curr.push_back(mp[x][i]+'0');
            curr.push_back(x);
            curr.push_back(' ');
            curr.push_back(mp[x][j]+'0');
            curr.push_back(x);
            ans.push_back(curr);
            i++;
            j--;
        }
    }
    for(ll i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
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