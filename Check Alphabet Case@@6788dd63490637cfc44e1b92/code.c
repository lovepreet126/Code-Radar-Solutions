// Your code here...
#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if("%d",a>=65 && "%d",a<=90){
        printf("Uppercase");
    }
    else if("%d",a>=91 && "%d",a<=122){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}