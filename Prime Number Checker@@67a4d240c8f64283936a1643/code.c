#include<stdio.h>

int isPrime(int a){
    if(a<=1){
        return 0;
    }
    for(int i=2; i<=a/2; i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
