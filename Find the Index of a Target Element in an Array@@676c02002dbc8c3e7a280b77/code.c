#include<stdio.h>
int main(){
    int size, find;
    scanf("%d",&size);

    int arr[size];

    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d",&find);

    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

    printf("\n%d", find);

    // int isfound = 0, foundindex = 0;
    
    // for(int i=0; i<size; i++){
    //     if(find == arr[i]){
    //         isfound = 1;
    //         foundindex = i;
    //         return 0;
    //     }
    // }

    // if(isfound == 1){
    //     printf("%d", foundindex);
    // } else{
    //     printf("%d",-1);
    // }
    return 0;
}