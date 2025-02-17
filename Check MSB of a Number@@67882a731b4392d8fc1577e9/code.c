// Your code here...
#include<stdio.h>
int main(){
    int a,b,result;
    scanf("%d%d",&a,&b);
    result=a>>31;
    if(result==1){
        printf(" Not Set");
    }
    else{
        printf(" Set");
    }
}