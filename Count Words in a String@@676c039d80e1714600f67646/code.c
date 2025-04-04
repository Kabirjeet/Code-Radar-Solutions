#include<stdio.h>
#include<string.h>

int count_words(int string[]){
    int words = 0;
    
    for(int i=0; string[i] != '\0'; i++){
        if((string[i] == ' ') && string[i+1] != ' '){
            words++;
        }
    }

    return words;
}

int main(){
    char string[100];
    scanf("%s",string);

    printf("%d",count_words(string));
    return 0;
}