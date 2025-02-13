#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);

    ch == 'R' ? printf("Stop") : (ch == 'G' ? printf("Go") : (ch == 'Y' ? printf("Slow Down") : printf("Invalid input")));
    return 0;
}