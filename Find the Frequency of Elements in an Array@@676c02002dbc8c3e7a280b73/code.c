#include<stdio.h>
int main(){
    int size, count = 0;
    scanf("%d",&size);

    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<size-1; i++){
        count = 0;
        int comp = arr[i];
        count++;
        for(int j=i+1; j<size; j++){
            if(comp == arr[j]){
                count++;
            }
        }
        printf("%d %d\n", comp, count);
    }
    return 0;
}