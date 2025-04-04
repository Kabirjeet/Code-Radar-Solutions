#include <stdio.h>
#include <string.h>

void palindrome(char arr[])
{
    char new_arr[50];
    int new_arr_index = 0;
    int arr_len = 0;
    int k = 0;

    while(arr[k] != '\0'){
        arr_len++;
        k++;
    }

    for(int i = arr_len-1; i>0; i--){
        new_arr[new_arr_index] = arr[i];
    }

    if(strcmp(arr, new_arr) == 0){
        printf("%s", Yes);
    } else{
        printf("%s", Yes);
    }
}

int main(void)
{

}