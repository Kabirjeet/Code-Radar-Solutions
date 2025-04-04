#include<stdio.h>
#include<string.h>

int count_words(char string[]){
    int words = 0;
    int in_word = 0;
    
    for(int i=0; string[i] != '\0'; i++){
        if(string[i] != ' ' && string[i] != '\n' && in_word == 0){
            words++;
            in_word = 1;
        } else if(string[i] == ' '){
            in_word = 0;
        }
    }

    return words;
}

int main(){
    char string[100];
    fgets(string, sizeof(string), stdin);

    printf("%d",count_words(string));
    return 0;
}