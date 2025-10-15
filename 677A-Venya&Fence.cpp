#include<iostream>
using namespace std;
int main(){
    int n, h;
    cin>>n;
    cin>>h;
    int s=0;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>h)
            s+=2;
        else
            s++;
    }
    cout<<s<<endl;
}
