#include <stdio.h>
#include <string.h>

void palindrome(char arr[])
{
    int new_arr_index = 0;
    int arr_len = 0;
    int k = 0;

    while(arr[k] != '\0'){
        arr_len++;
        k++;
    }

    char new_arr[arr_len];

    for(int i = arr_len-1; i>=0; i--){
        new_arr[new_arr_index] = arr[i];
        new_arr_index++;
    }

    printf("New Arr\n");
    printf("%s", new_arr);

    // if(strcmp(arr, new_arr) == 0){
    //     printf("Yes");
    // } else{
    //     printf("No");
    // }
}

int main(void)
{
    char st[50];
    scanf("%s", st);
    palindrome(st);
}