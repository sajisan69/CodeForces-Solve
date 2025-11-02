// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int c=0;
//     // for(int i=s.length()-1; i>0; i--){
//     //     if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
//     //         if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='y' || s[i]=='Y'){
//     //             cout<<"YES";
//     //             return 0;
//     //         }
//     //         else{
//     //             cout<<"NO";
//     //             return 0;
//     //         }
//     //     }
//     // }
//     for(int i=0; i<s.length(); i++){
//         if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
//             c++;
//         }
//     }
//     if(s[c]=='a'||s[c]=='e'||s[c]=='i'||s[c]=='o'|| s[c]=='u'||s[c]=='A'||s[c]=='E'|| s[c]=='I'||s[c]=='O'|| s[c]=='U'||s[c]=='y'||s[c]=='Y')
//         cout<<"YES";
//     else
//         cout<<"NO";
// }
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     getline(cin, s);
//     for(int i=s.length()-1; i>=0; i--){
//         if(isalpha(s[i])){
//             char ch = tolower(s[i]);
//             if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='y')
//                 cout<<"YES";
//             else
//                 cout<<"NO";
//             break;
//         }
//     }
// }
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    for(int i=s.length()-1; i>=0; i--){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
            char ch=tolower(s[i]);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='y')
                cout<<"YES";
            else
                cout<<"NO";
            return 0;
            }
        }
}

