#include<stdio.h>

int digsum(int num){
    int sum = 0;
    while(num != 0){
        sum += num%10;
        num /= 10;
    }
    return sum;
}
int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<size; i++){
        int sum = digsum(arr[i]);
        arr[i] = sum;
    }

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}


