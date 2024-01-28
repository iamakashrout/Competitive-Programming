#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        long long x=a+b;
        if(x%2==0){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }
    return 0;
}