// Your code here...
void isPrime(int num){
    int i,b;
    for(i=0;i*i<num;i++){
        if(num%i==0){
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