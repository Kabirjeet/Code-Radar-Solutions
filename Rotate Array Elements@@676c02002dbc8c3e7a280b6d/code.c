#include<stdio.h>
void rotate_array(int ar[], int rot, int sz){
    int diff = sz - rot;
    int a[rot];
    int aindex = 0;
    for(int i=diff; i<sz; i++){
        a[aindex] = ar[i];  
        aindex++;
    }

    for(int i=0; i<diff; i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int size, rotate;
    scanf("%d",&size);

    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d", &rotate);

    rotate_array(arr, rotate, size);
    return 0;
}