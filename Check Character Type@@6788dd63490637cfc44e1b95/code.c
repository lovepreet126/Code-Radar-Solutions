// Your code here...
#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if((a>=65 && a<=90) && !(a>=0 || a<=0)){
        if(a!='a' || a!='e' || a!='o' || a!='i' || a!='u'){
            printf("constant");
        }
        else{
            printf("Vovel";)
        }
    }
    elif if(!(a>=65 && a<=90) && (a>=0 || a<=0)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}