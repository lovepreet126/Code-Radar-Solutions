// Your code here...
#include<stdio.h>
int main(){
    int a,b,i,j;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
       scanf("%d",&b);
       arr[i]=b;
    }
    for(j=0;j<a;j++){
        int num=0;
        if(arr[j]<arr[j+1]){
            num=1
            break;
        }
        else{
            continue;
        }
    }
    if(num==1){
        printf("Not Sorted");
    }
    else{
        printf("Sorted");
    }
}