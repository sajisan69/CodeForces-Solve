#include<iostream>
using namespace std;
int main(){
    int n,c=1;
    cin>>n;
    string arr[100000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1])
            c++;
    }
    cout<<c;
}
