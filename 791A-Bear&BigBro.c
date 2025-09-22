#include<stdio.h>
#include<stdlib.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int y=0;
    while(a<b){
        a*=3;
        b*=2;
        y++;
    }
    printf("%d", y);
}