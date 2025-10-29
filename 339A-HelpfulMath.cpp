#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int one=0, two=0, three=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='1')
            one++;
        else if(s[i]=='2')
            two++;
        if(s[i]=='3')
            three++;
    }
    for(int i=0; i<one; i++){
        if(i!=one-1 || two>0 || three>0)
            cout<<"1+";
        else
            cout<<"1";
    }
    for(int i=0; i<two; i++){
        if(i!=two-1 || three>0)
            cout<<"2+";
        else
            cout<<"2";
    }
    for(int i=0; i<three; i++){
        if(i==three-1)
            cout<<"3";
        else
            cout<<"3+";
    }
}