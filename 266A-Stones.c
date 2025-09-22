#include<stdio.h>
int main(){
    int n, r=0;
    char s[10];
    scanf("%d", &n);
    scanf("%s", s);
    for(int i=0; i<n-1; i++){
        if(s[i]==s[i+1])
        r++;
    }
    printf("%d", r);
    return 0;
}