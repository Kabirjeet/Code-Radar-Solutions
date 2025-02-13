#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);

    if(toupper(ch)){
        printf("Uppercase");
    } else{
        printf("Lowercase");
    }
    return 0;
}