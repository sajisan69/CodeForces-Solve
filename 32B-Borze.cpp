#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i=0;
    while(i<s.size()){
        if(s[i]=='.'){
            cout<<"0";
            i++;
        }
        else if(s[i]=='-'){
            if(s[i+1]=='.')
                cout<<"1";
            else if(s[i+1]=='-')
                cout<<"2";
            i+=2;
        } 
    }
    return 0;
}