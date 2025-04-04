#include<stdio.h>
#include<string.h>

int len_of_str(char string[]){
    // int len = strlen(string);
    int len = 0;

    for(int i=0; string[i+1] == '\0'; i++){
        len++;
    }

    return len+1;
}

int main(){
    char string[20];
    scanf("%s",string);

    printf("%d", len_of_str(string));
    return 0;
}