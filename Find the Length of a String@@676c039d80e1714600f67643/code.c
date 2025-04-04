#include<stdio.h>
#include<string.h>

int len_of_str(char string[]){
    string[strcspn(string,"\n")] = 0;

    return strlen(string);
}

int main(){
    char string[20];
    // scanf("%s",string);
    fgets(string, sizeof(string), stdin);

    printf("%d", len_of_str(string));
    return 0;
}