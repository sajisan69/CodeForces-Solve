#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n%2!=0){
        cout<<"NO";
        return 0;
    }
    int fh=0, sh=0;
    for(int i=0;i<n;i++){
        if(s[i]!='4' && s[i]!='7'){
            cout<<"NO";
            return 0;
        }
        int d=s[i]-'0';
        if(i<n/2)
            fh+=d;
        else      
            sh+=d;
    }
    if(fh==sh) 
        cout<<"YES";
    else    
        cout<<"NO";
    return 0;
}
