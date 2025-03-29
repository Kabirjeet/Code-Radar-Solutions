int fac(int n){
    if(n == 0) return 1;
    return n * fac(n-1);
}
void factorialRange(int s, int e){
    for(int i=s; i<e; i++){
        printf("%d\n",fac(i));
    }
}