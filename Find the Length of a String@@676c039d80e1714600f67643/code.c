#include<stdio.h>
#include<string.h>

int len_of_str(char string[]){
    int len = strlen(string);

    return len;
}

int main(){
    char string[20];
    scanf("%s",string);

    printf("%d", len_of_str(string));
    return 0;
}