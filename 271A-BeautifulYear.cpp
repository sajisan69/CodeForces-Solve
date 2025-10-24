#include<iostream>
using namespace std;
int main(){
    int y;
    cin>>y;
    y++;
    while(1){
        int d[3];
        int t=y;
        for(int i=0; i<4; i++){
        d[i]=t%10;
        t/=10;
        }
        if(d[0]!=d[1] && d[0]!=d[2] && d[0]!=d[3] && d[1]!=d[2] && d[1]!=d[3] && d[2]!=d[3]){
            for(int i=3; i>0; i--){
                cout<<d[i];
            }
            break;
        }
        y++;
    }
}