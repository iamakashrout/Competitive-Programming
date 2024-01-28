#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k, x;
        cin>>n>>k>>x;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());
        vector<long long int> prefix(n+1, 0);
        long long int sum=0;
        for(int i=1; i<=n; i++){
            prefix[i]=prefix[i-1]+arr[i-1];
            sum+=arr[i-1];
        }
        long long int ans=INT_MIN;
        for(int i=0; i<=k; i++){
            long long int curr=sum-2*(prefix[min(i+x, n)]-prefix[i]);
            ans=max(ans, curr);
            sum-=arr[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}