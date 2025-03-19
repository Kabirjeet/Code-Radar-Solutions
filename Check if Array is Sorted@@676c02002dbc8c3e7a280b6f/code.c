#include<stdio.h>
char sorted(int ar[], int sz){
    for(int i=0, j=1; i<sz, j<sz; i++,j++){
        if(ar[i]>ar[j]){
            return "Not Sorted";
        } else{
            return "Sorted";
        }
    }
}
int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("%c",sorted(arr, size));
    return 0;
}