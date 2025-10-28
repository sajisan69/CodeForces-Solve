#include<iostream>
using namespace std; 
int main(){
    int n;
    cin>>n;
    int p=0, q=0;
    int r=0, s=0;
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        if(x==0)
            p++;
        else if(x==1)
            q++;
        if(y==0)
            r++;
        else
            s++;
    }
    int z=0;
    if(p>q)
        z=q;
    else
        z=p;
    int c=0;
    if(r>s)
        c=s;
    else
        c=r;
    int j=c+z;
    cout<<j;
}