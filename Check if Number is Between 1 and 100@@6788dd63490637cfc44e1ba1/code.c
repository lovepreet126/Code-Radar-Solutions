// Your code here...
#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    for(i=1,i<=100,i++){
        if(a==i){
            printf("In Range");
            break;
        }
        else{
            printf("Out of Range");
        }
    }
}