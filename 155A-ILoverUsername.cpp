#include<iostream>
using namespace std;
int main(){
    int n, a, b, c=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    a=0, b=0;
    for(int i=0; i<n; i++){
        if(arr[i]>arr[a]){
            a=i;
            c++;
        }
        else if(arr[i]<arr[b]){
            b=i;
            c++;
        }
    }
    cout<<c;
}
