#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int ans=0;
        for(int i=1; i<=n; i++){
            if(n%i==0){
                int k=n/i;
                int curr=0;
                for(int j=0; j<k; j++){
                    int diff=0;
                    for(int l=j; l<n; l+=k){
                        diff=__gcd(diff, abs(arr[l]-arr[j]));
                    }
                    curr=__gcd(curr, diff);
                }
                if(curr!=1){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}