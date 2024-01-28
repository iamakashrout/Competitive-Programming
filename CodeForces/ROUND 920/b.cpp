#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string f;
        cin>>f;
        int add=0;
        int del=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1' && f[i]=='0'){
                del++;
            }
            else if(s[i]=='0' && f[i]=='1'){
                add++;
            }
        }
        cout<<min(add, del)+abs(add-del)<<endl;
    }
    return 0;
}