#include<stdio.h>

void palindrome(int arr[], int size){
    int start = 0;
    int end = size-1;

    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main(){
    int size, ispalin = 1;
    scanf("%d",&size);

    int arr[size];
    int comp[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<size; i++){
        comp[i] = arr[i];
    }
    palindrome(arr, size);

    for(int i=0; i<size; i++){
        if(arr[i] != comp[i]){
            ispalin = 0;
            break;
        } else{
            ispalin = 1;
        }

    if(ispalin == 1){
        printf("YES");
    } else{
        printf("NO");
    }
    return 0;
}
}


