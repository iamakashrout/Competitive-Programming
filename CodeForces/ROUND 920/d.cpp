#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<long long int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        vector<long long int> b(m);
        for(int i=0; i<m; i++){
            cin>>b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        long long ans=0;
        int i=0, j=n-1, l=0, r=m-1;
        while(i<=j){
            if(abs(a[i]-b[r])>abs(a[j]-b[l])){
                ans+=abs(a[i]-b[r]);
                i++;
                r--;
            }
            else{
                ans+=abs(a[j]-b[l]);
                j--;
                l++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}