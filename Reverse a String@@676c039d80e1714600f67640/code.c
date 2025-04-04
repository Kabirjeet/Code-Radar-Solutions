#include<stdio.h>
void rev(char str[]){
    int count = 0, i = 0;

    while( str[i] != '\0'){
        count++;
        i++;
    }

    int start = 0;
    int end = count-1;

    while(start < end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("%s",str);
}
int main(){
    char str[50];
    scanf("%s",str);

    rev(str);
    return 0;
}