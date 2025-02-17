// Your code here...
#include<stdio.h>
int main(){
    int a,b,result;
    scanf("%d%d",&a,&b);
    result=a>>(sizeof(a)*32-1);
    if(result==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}