// Your code here...
#include<stdio.h>
int main(){
    int n,i,j,arr[100],max1,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++){
        if(arr[j]>max){
            max1=max;
            max=arr[j];
        }

    }
    printf("%d",max1);
}