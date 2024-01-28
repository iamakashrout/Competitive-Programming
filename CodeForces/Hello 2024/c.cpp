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
        int s=arr[0];
        int t=INT_MAX;
        int pen=0;
        for(int i=1; i<n; i++){
            if(arr[i]<=s && arr[i]<=t){
                if(s<t){
                    s=arr[i];
                }
                else{
                    t=arr[i];
                }
            }
            else if(arr[i]>s && arr[i]>t){
                if(s>t){
                    t=arr[i];
                }
                else{
                    s=arr[i];
                }
                pen++;
            }
            else{
                if(arr[i]>s){
                    t=arr[i];
                }
                else{
                    s=arr[i];
                }
            }
        }
        cout<<pen<<endl;
    }
    return 0;
}