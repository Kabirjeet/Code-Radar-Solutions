#include<stdio.h>
int main(){
    char ch;
    scanf("%c",ch);

    if(ch == 'A'){
        printf("Excellent");
    } else if(ch == 'B'){
        printf("Good");
    } else if(ch == 'C'){
        printf("Average");
    } else if(ch == 'A'){
        printf("Below Average");
    } else{
        printf("Fail");
    }
    return 0;
}