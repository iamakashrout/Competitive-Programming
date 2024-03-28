#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

bool possible(vector<ll>& a, ll mid, ll k){
    ll n=a.size();
    ll index=-1;
    ll H=0;
    for(ll i=n-1; i>=0; i--){
        if(a[i]>=mid){
            H++;
        }
        else{
            index=i;
            break;
        }
    }
    if(H>=mid || index==-1){
        return true;
    }
    ll count=0;
    for(ll i=n-1; i>index; i--){
        ll temp=a[i];
        while(temp%k==0 && temp/k>=mid){
            count++;
            temp/=k;
        }
    }
    set<ll> s;
    for(ll i=index; i>=0; i--){
        ll temp=a[i];
        if(temp%k==0){
            s.insert(i);
        }
        while(temp%k==0){
            count++;
            temp/=k;
        }
    }
    ll rem=0;
    for(ll i=index; i>=0; i--){
        if(s.find(i)!=s.end()){
            continue;
        }
        ll temp=a[i];
        if(count>0 && a[i]*k>=mid && a[i]%k!=0){
            count--;
            H++;
        }
        else if(count<=0 && a[i]*k>=mid && a[i]%k!=0){
            rem++;
        }
    }
    vector<ll> v;
    for(ll i=n-1; i>index; i--){
        ll temp=a[i];
        while(temp%k==0 && temp/k>=mid){
            count++;
            temp/=k;
        }
        ll curr=0;
        if(temp%k!=0){
            continue;
        }
        while(temp%k==0){
            temp/=k;
            curr++;
        }
        v.push_back(curr);
    }
    sort(v.rbegin(), v.rend());
    for(ll i=0; i<v.size(); i++){
        if(rem==0){
            break;
        }
        H--;
        H+=min(rem, v[i]);
        rem-=min(rem, v[i]);
    }
    return H>=mid;
}

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    ll low=1, high=n;
    ll ans=0;
    while(low<=high){
        ll mid=(low+high)/2;
        if(possible(a, mid, k)){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
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