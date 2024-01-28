#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int low=1;
        long long int high=1e9;
        unordered_map<long long int, bool> check;
        for(int i=0; i<n; i++){
            long long int c, x;
            cin>>c>>x;
            if(c==1){
                low=max(low, x);
            }
            else if(c==2){
                high=min(high, x);
            }
            else{
                check[x]=true;
            }
        }
        long long int ans=high-low+1;
        for(auto i=check.begin(); i!=check.end(); i++){
            if(i->first>=low && i->first<=high){
                ans--;
            }
        }
        if(ans<0){
            ans=0;
        }
        cout<<ans<<endl;
    }
    return 0;
}