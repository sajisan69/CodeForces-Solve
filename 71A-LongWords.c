#include <stdio.h>
#include <string.h>

int main() {
    char s[101];  
    int c;
    scanf("%d", &c);
    for(int i = 0; i < c; i++){
        scanf("%s", s);
        int len = strlen(s);  
        if(len <= 10){
            printf("%s\n", s);
        } else {
            printf("%c%d%c\n", s[0], len - 2, s[len - 1]);
        }
    } 
    return 0;
}
