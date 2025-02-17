// Your code here...
#include<stdio.h>
int main(){
    int a,b,result;
    scanf("%d%d",&a,&b);
    result=a&1;
    if(result==0){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}