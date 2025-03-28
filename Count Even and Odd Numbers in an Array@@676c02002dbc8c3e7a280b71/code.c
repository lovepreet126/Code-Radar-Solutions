// Your code here...
#include<stdio.h>
int main(){
    int a,n,arr[100],even=0,odd=0,i,j;
    scanf("%d",&a);
    for(i=0,i<a,i++){
        scanf("%d",&arr[i]);
    }
    for(j=0,j<a,j++){
        if(arr[j]%2==0){
            even=even+1;
        }
        else{
            odd=odd+1;
        }
    }
    printf("%d %d",even,odd);

}