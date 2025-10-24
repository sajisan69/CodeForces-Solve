#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int c=1;
    for(int i=1; i<s.size(); i++){
        if(s[i]==s[i-1]){
            c++;
            if(c>=7)
                break;
        }
        else
            c=1;
    }
     if(c>=6)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
    return 0;
}