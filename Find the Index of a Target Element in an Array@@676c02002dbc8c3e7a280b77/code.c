// Your code here...
#include<stdio.h>
int main(){
    int arr[20],i,j,a,n,t;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(j=0;j<n;j++){
        if(arr[j]==t){
            n=j;
             printf("%d",n);
            break;
        }
        else{
            continue;
        }

    }
   
}