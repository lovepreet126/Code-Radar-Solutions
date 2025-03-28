// Your code here...
#include<stdio.h>
int main(){
    int n,i,j,arr[100],max1=-1,max=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++){
        if(arr[j]>0){
            if(arr[j]>max){
            max1=max;
            max=arr[j];
        }
        }
        else{
            if(arr[j]<0){
            if(arr[j]<max1){
            
            max=arr[j];
            max1=max;
        }
            }
        }

    }
    printf("%d",max1);
}