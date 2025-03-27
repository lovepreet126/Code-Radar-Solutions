// Your code here...
#include<stdio.h>
int main(){
    int a,i,n;
    scanf("%d",&a);
    for(i=2,i<a,i++){
        if(a%i==0){
            
            n=0;
            break;
        }
        else{
            n=1;
            
        }
    }
    if(n==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}