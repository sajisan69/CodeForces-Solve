#include<iostream>
using namespace std;
int main(){
   int n,m,x;
   cin>>n>>m;
   for(int i=n+1; i<=50; i++){
       int j;
       for(j=2; j*j<=i; j++){
            if(i%j==0)
                break;
       }
       if(j*j>i){
            x=i;
            break;
        }
   }
    if(x==m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
 
}