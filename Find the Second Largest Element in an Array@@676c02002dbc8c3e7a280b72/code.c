// Your code here...
#include<stdio.h>
int main(){
    signed int n,i,j,arr[100],max1,max=arr[0];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n==1){
        printf("%d",-1);
    }
    else{
        for(j=0;j<n;j++){
        if(arr[j]>max){
            max1=max;
            max=arr[j];
        }

    }
    }
    printf("%d",max1);
}