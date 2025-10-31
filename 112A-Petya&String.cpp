// #include<stdio.h>
// #include<string.h>
// int main(){
//     char a[100], b[100];
//     scanf("%s", a);
//     scanf("%s", b);
//     int c=strlen(a);
//     for(int i=0; i<c; i++){
//         if(a[i]>='A' && a[i]<='Z'){
//             a[i]=a[i]+32;
//         }
//         if(b[i]>='A' && b[i]<='Z'){
//             b[i]=b[i]+32;
//         }
//         if(a[i]>b[i]){
//         printf("1");
//         return 0;
//         }
//         else if(a[i]<b[i]){
//         printf("-1");
//         return 0;
//         }
//     }
//         printf("0");
// }
#include<iostream>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    for(int i=0; i<a.length(); i++){
        if(a[i]>='A' && a[i]<='Z')
            a[i]+=32;
        if(b[i]>='A' && b[i]<='Z')
            b[i]+=32;
        if(a[i]>b[i]){
            cout<<"1";
            return 0;
        }
        if(a[i]<b[i]){
            cout<<"-1";
            return 0;
        }
    }
    cout<<"0";
}

