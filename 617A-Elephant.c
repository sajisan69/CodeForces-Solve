#include<stdio.h>
int main(){
    int dis;
    scanf("%d", &dis);
    int s=dis/5;
    int k=dis%5;
    if(k==4)
        s++;
    else if(k==3)
        s++;
    else if(k==2)
        s++;
    else if(k==1)
        s++;
    printf("%d", s);
}