// Your code here...
void isPrime(int numb){
    int i,b;
    for(i=0;i*i<numb;i++){
        if(numb%i==0){
            b=1;
            break;
        }
        else{
            b=0;
        }
    }
    if(b==1){
        printf("not prime");
    }
    else{
        printf("prime");
    }
}