#include<iostream>
using namespace std;
int main(){
    string w;
    cin>>w;
    int c=0, s=0;
    for(int i=0; i<w.length(); i++){
        if(w[i]>='a' && w[i]<='z')
            s++;
        else if(w[i]>='A' && w[i]<='Z')
            c++;
    }
    if(c>s){
        for(int i=0; i<w.length(); i++){
            if(w[i]>='a' && w[i]<='z')
                w[i]=w[i]-32;
        }
    }
    else if(c<s){
        for(int i=0; i<w.length(); i++){
        if(w[i]>='A' && w[i]<='Z')
            w[i]=w[i]+32;
        }
    }
    cout<<w<<endl;
}