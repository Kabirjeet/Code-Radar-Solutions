int main(){
    int n;
    scnaf("%d",&n);

    if(n%5 == 0 && n%11 == 0){
        printf("Divisible");
    } else {
        printf("Not Divisible");
    }
    return 0;
}