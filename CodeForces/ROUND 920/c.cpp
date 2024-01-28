#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, f, a, b;
        cin>>n>>f>>a>>b;
        vector<long long int> m(n);
        for(int i=0; i<n; i++){
            cin>>m[i];
        }
        long long int prev=0;
        bool ans=true;
        for(int i=0; i<n; i++){
            long long int z=(m[i]-prev)*a;
            if(b<z){
                f-=b;
            }
            else{
                f-=z;
            }
            if(f<=0){
                ans=false;
                break;
            }
            prev=m[i];
        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}