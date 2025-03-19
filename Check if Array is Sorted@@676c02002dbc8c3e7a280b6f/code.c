#include<stdio.h>
const char* sorted(int ar[], int sz){
    for(int i=0; i<sz-1; i++){
        if(ar[i]>ar[i+1]){
            return "Not Sorted";
        } 
    }
    return "Sorted";
}
int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("%s",sorted(arr, size));
    return 0;
}