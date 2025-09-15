#include<stdio.h>
#include<stdlib.h>
int main(){
    int number, a,b,c, count=0;
    scanf("%d",&number);
    for(int i=0; i<number; i++){
        scanf("%d %d %d", &a, &b, &c);
        if((a+b+c)>=2)
        count++;
    }
    printf("%d\n", count);
    return 0;
}