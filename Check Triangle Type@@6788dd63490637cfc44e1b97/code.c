// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c && c==a){
        printf("Equilateral");
    }
    else if((a==b && b==c && c!=a) || (a==b && b!=c && c==a) || (a!=b && b==c && c==a)){
        printf("Isosceles");
    }
    else if(a!=b && b!=c && c!=a){
        printf("scalene");
    }
}