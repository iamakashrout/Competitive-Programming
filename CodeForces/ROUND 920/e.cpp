#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int h, w, x1, y1, x2, y2;
        cin>>h>>w>>x1>>y1>>x2>>y2;
        string winner="Alice";
        if(x1>=x2){
            cout<<"Draw"<<endl;
            continue;
        }
        if((x2-x1)%2==0){
            winner="Bob";
            swap(x1, x2);
            swap(y1, y2);
        }
        else{
            if(y1<y2){
                y1++;
            }
            else if(y1>y2){
                y1--;
            }
            x1++;
        }
        int turn=abs(x2-x1)/2;
        int moves=0;
        if(y1>=y2){
            moves=max(moves, y2-1);
        }
        if(y1<=y2){
            moves=max(moves, w-y2);
        }
        long long diff=abs(y1-y2);
        if(diff==0){
            cout<<winner<<endl;
            continue;
        }
        if(moves+diff<=turn){
            cout<<winner<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }
    }
    return 0;
}