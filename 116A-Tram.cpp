#include<iostream>
using namespace std;
int main(){
    int n, m=0, p=0;
    cin>>n;
    for(int i=0; i<n; i++){
        int x, y;
        cin>>x>>y;
        p+=(y-x);
        if(p>m)
            m=p;
    }
    cout<<m;
}