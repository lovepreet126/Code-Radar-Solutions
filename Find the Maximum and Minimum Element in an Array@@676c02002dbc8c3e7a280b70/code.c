// Your code here...
#include<stdio.h>
int main(){
    int arr[15],n,max=0,i,j,k,min=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++){
        if(arr[j]>max){
            max=arr[j];
        }
    }
    for(k=n;k=0;k--){
        if(max>arr[k]){
            min=arr[k];
        }
    }
    printf("%d %d",min,max);
}