#include<iostream>
using namespace std;
int main(){
    string s, t;
    cin>>s>>t;
    int a=0;
    if(s.length()==t.length()){
        for(int i=0; i<s.length(); i++){
        if(s[i]!=t[s.length()-i-1]){
            a=0;
            break;
        }
        else 
            a=1;
    }
        if(a==1)
        cout<<"YES";
        else
        cout<<"NO";
    } 
    else
        cout<<"NO";
}