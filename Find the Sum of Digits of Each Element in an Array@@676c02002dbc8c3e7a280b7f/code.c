#include<stdio.h>

int digsum(int num){
    if(num == 0) return 0;
    return num%10 + digsum(num/10);
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


