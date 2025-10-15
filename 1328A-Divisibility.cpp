
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--){     
        int a, b;
        cin>>a>>b;
        int r=a%b;
        if(r==0){
            cout<<0<<endl;
        } 
        else {
            int m=b-r;
            cout<<m<<endl;
        }
    }
    return 0;
}