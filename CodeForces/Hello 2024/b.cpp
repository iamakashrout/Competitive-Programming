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
        int ans=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='+'){
                ans++;
            }
            else{
                ans--;
            }
        }
        cout<<abs(ans)<<endl;
    }
    return 0;
}