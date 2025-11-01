#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        int arr[m];
        for(int j=0;j<m;j++){
            cin>>arr[j];
        }
        sort(arr, arr+m);
        int a=1;
        for(int j=1; j<m; j++){
            if(arr[j]-arr[j-1]>1){
                a=0;
                break;
            }
        }
        if(a==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}