#include<stdio.h>
int main(){
    int size, primecount = 0;
    scanf("%d",&size);

    int arr[size];

    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<size; i++){
        int isprime = 1;

        if(arr[i] <= 1){
            isprime = 0;
        } else{
            for(int j=2; j<=arr[i]/2; j++){
            if(arr[i]%j == 0){
                isprime = 0;
                break;
            }
        }
        }
        
        if(isprime == 1){
            primecount++;
        }
    }

    printf("%d",primecount);
    return 0;
}