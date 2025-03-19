#include<stdio.h>
void rotate_array(int ar[], int rot, int sz){
    int diff = sz - rot;
    int a[rot];
    int final_arr[sz];
    int aindex = 0;
    int finalindex = 0;

    for(int i=diff; i<sz; i++){
        a[aindex] = ar[i];  
        aindex++;
    }

    for(int i=0; i<rot; i++){
        final_arr[finalindex] = a[i];
        finalindex++;
    }
    for(int i=0; i<diff; i++){
        final_arr[finalindex] = ar[i];
        finalindex++;
    }
    for(int i=0; i<sz; i++){
        printf("%d",final_arr[i]);
        printf("\n");
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