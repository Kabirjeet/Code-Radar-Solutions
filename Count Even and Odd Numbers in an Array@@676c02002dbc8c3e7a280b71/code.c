#include<stdio.h>
int main(){
    int size, even = 0, odd = 0;
    scanf("%d",&size);

    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<size; i++){
        if(arr[i]%2 == 0){
            even++;
        } else{
            odd++;
        }
    }

    printf("%d %d",even, odd);
    return 0;
}