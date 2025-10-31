#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string g, r, p;
    cin>>g>>r>>p;
    string a=g+r;
    sort(a.begin(), a.end());
    sort(p.begin(), p.end());
    if(a==p)
        cout<<"YES";
    else 
        cout<<"NO";
}