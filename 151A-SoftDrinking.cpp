#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink=(k*l)/nl;
    int LC=c*d;
    int sG=p/np;
    int a=min(drink,min(LC, sG));
    int toast=a/n;
    cout<<toast;
}