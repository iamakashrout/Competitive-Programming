#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<pair<int, int>> v(4);
        int x1=0, y1=0;
        int x, y;
        for(int i=0; i<4; i++){
            cin>>v[i].first>>v[i].second;
            if(i==0){
                x1=v[i].first;
                y1=v[i].second;
            }
            else{
                if(v[i].first!=x1){
                    x=abs(x1-v[i].first);
                }
                if(v[i].second!=y1){
                    y=abs(y1-v[i].second);
                }
            }
        }
        cout<<x*y<<endl;

    }
    return 0;
}