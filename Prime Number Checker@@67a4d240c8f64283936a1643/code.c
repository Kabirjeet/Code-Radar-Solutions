#include<stdio.h>

int isPrime(int a){
    if(a==0){
        return 0;
    }
    for(int i=2; i<a/2; i++){
        if(a%i==0){
            return 0;
            break;
        }
        else return 1;
    }
    //return 1;
}
