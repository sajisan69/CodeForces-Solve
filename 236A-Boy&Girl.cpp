#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int x=s.size();
    for(char c='a'; c<'z'; c++){
        for(int i=0; i<x; i++){
            if(s[i]==c){
                cout<<c;
                break;
            }
        }
    }
}