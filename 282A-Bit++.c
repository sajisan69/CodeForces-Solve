#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, x=0;
    scanf("%d", &n);
    char s[4];
    for(int i=0; i<n; i++){
        scanf("%s", s);
        if(s[1]=='+')
        x++;
        else
        x--;
    }
    printf("%d\n", x);
    return 0;
}