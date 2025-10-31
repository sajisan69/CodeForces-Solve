#include<iostream>
using namespace std;
int main(){
    string p;
    cin>>p;
    int i=0;
    int a=0;
    while(i<p.length()){
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9'){
            a=1;
            break;
        }
        i++;
    }
    if(a==1)
        cout<<"YES";
    else
        cout<<"NO";
}