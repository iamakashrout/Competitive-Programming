#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

class SegmentTree {
public:
    ll n;
    vector<ll> maxTree;
    vector<ll> minTree;

    void buildTree(vector<ll>& a, ll start, ll end, ll index){
        if(start==end){
            maxTree[index]=a[start];
            minTree[index]=a[end];
            return;
        }
        ll mid=(start+end)/2;
        buildTree(a, start, mid, 2*index+1);
        buildTree(a, mid+1, end, 2*index+2);
        maxTree[index]=max(maxTree[2*index+1], maxTree[2*index+2]);
        minTree[index]=min(minTree[2*index+1], minTree[2*index+2]);
    }

    void updateTree(ll start, ll end, ll index, ll val, ll position) {
        if(start==end){
            maxTree[index]=val;
            minTree[index]=val;
            return;
        }
        ll mid=(start+end)/2;
        if(position<=mid){
            updateTree(start, mid, 2*index+1, val, position);
        }
        else{
            updateTree(mid+1, end, 2*index+2, val, position);
        }
        maxTree[index]=max(maxTree[2*index+1], maxTree[2*index+2]);
        minTree[index]=min(minTree[2*index+1], minTree[2*index+2]);
    }

    pair<ll, ll> treeQuery(ll start, ll end, ll l, ll r, ll index){
        if(r<start || l>end){
            return {LLONG_MIN, LLONG_MAX};
        }
        if(l<=start && r>=end){
            return {maxTree[index], minTree[index]};
        }
        ll mid=(start+end)/2;
        pair<ll, ll> left=treeQuery(start, mid, l, r, 2*index+1);
        pair<ll, ll> right=treeQuery(mid+1, end, l, r, 2*index+2);
        ll mx=max(left.first, right.first);
        ll mn=min(left.second, right.second);
        return {mx, mn};
    }

    SegmentTree(vector<ll>& a){
        n=a.size();
        maxTree.resize(4*n);
        minTree.resize(4*n);
        buildTree(a, 0, n-1, 0);
    }

    void update(ll position, ll val){
        updateTree(0, n-1, 0, val, position);
    }

    pair<ll, ll> query(ll l, ll r){
        pair<ll, ll> res=treeQuery(0, n-1, l, r, 0);
        return res;
    }

};

void solve(){
    
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