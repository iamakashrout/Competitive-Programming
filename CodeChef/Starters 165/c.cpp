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
    string ans="";
    ans+=s[0];
    ll i=1;
    while(i<n){
        if(s[i]==s[i-1]){
            ll j=i;
            string temp="";
            while(j<n){
                temp+=s[j];
                j++;
                if(j<n && s[j]==s[j-1]){
                    break;
                }
            }
            reverse(temp.begin(), temp.end());
            ans=ans+temp;
            while(j<n){
                ans+=s[j];
                j++;
            }
            i=j;
        }
        else{
            ans+=s[i];
        }
        i++;
    }
    bool check=true;
    for(ll i=1; i<n; i++){
        if(ans[i]==ans[i-1]){
            check=false;
            break;
        }
    }
    if(check){
        cout<<"Yes"<<endl;
        return;
    }
    ans="";
    ans+=s[n-1];
    i=n-2;
    while(i>=0){
        if(s[i]==s[i+1]){
            ll j=i;
            string temp="";
            while(j>=0){
                temp=s[j]+temp;
                j--;
                if(j>=0 && s[j]==s[j+1]){
                    break;
                }
            }
            reverse(temp.begin(), temp.end());
            ans=temp+ans;
            while(j>=0){
                ans=s[j]+ans;
                j--;
            }
            i=j;
        }
        else{
            ans=s[i]+ans;
        }
        i--;
    }
    check=true;
    for(ll i=1; i<n; i++){
        if(ans[i]==ans[i-1]){
            check=false;
            break;
        }
    }
    if(check){
        cout<<"Yes"<<endl;
        return;
    }
    cout<<"No"<<endl;
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