#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

void solve(){
    ll n, m, k;
    cin>>n>>m>>k;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    vector<ll> b(m);
    for(ll i=0; i<m; i++){
        cin>>b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll i=0, j=0;
    ll A=0, B=0, C=0;
    ll ind=1;
    while(i<n || j<m){
        if(i<n && j<m && a[i]==ind && a[i]==b[j]){
            C++;
            while(i<n-1 && a[i+1]==a[i]){
                i++;
            }
            i++;
            while(j<m-1 && b[j+1]==b[j]){
                j++;
            }
            j++;
        }
        else if(i<n && a[i]==ind){
            A++;
            if(A>k/2){
                cout<<"NO"<<endl;
                return;
            }
            while(i<n-1 && a[i+1]==a[i]){
                i++;
            }
            i++;
        }
        else if(j<m && b[j]==ind){
            B++;
            if(B>k/2){
                cout<<"NO"<<endl;
                return;
            }
            while(j<m-1 && b[j+1]==b[j]){
                j++;
            }
            j++;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
        ind++;
        if(ind>k){
            break;
        }
    }
    if(A+B+C<k){
        cout<<"NO"<<endl;
        return;
    }
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