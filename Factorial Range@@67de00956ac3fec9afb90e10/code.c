void factorialRange(int s, int e){
    for(int i=s; i<e; i++){
        int fac = 1;
        for(int j=i; j>0; j--){
            fac = fac*i;
        }
        printf("%d\n",fac);
    }
}