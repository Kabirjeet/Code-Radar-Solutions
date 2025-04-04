#include<stdio.h>

int count_letter(char st[], char letter){
    int count = 0, i=0;

    while(st[i] != '\n'){
        if(st[i] == letter){
            count++;
        }
        i++;
    }

    return count;
}
int main(){
    char st[10];
    scanf("%s", st);
    char letter;
    scanf(" %c",&letter);

    printf("%d", count_letter(st, letter));
    return 0;
}