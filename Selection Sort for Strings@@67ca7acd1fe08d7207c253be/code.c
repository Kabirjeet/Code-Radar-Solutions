void selectionSort(char ar[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if((int)ar[j][0] < (int)ar[i][0]){
                char temp = ar[j];
                ar[j] = ar[i];
                ar[i] = temp;
            }
        }
    }
}

void printArray(char ar[], int size){
    for(int i=0; i<size; i++){
        printf("%s ", ar[i]);
    }
}