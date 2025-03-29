void factorialRange(int s, int e){
    if(e>s){
        printf("Invalid range");
        return 0;
    }

    if(s<0 || e<0){
        printf("Invalid range");
        return 0;
    }

    for(int i=s; i<=e; i++){
        int fac = 1;
        for(int j=i; j>0; j--){
            fac = fac*j;
        }
        printf("%d\n",fac);
    }
}