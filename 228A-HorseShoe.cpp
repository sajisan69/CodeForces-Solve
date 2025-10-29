#include<iostream>1
using namespace std;
int main(){
    int arr[4];
    int c=0;
    for(int i=0; i<=3; i++){
        cin>>arr[i];
    }
    for(int i=0; i<4; i++){
        for(int j=i+1; j<4; j++){
            if(arr[i]==arr[j]){
                c++;
                break;
            }
        }
    }
    cout<<c;
}