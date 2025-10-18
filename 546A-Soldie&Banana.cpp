#include<iostream>
using namespace std;
int main(){
    int k,n,w, x=0;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++){
        // k=k*i;
        x=x+(k*i);
    }
    if(x>n){
        cout<<x-n<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
}