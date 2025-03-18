// Your code here...
#include<stdio.h>
int main(){
    int a,b,i,j,num=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
       scanf("%d",&arr[i]);
    }
    if(a==1){
        printf("Sorted");
    }
    else{
        for(j=0;j<a;j++){
        
        if(arr[j]>arr[j+1]){
            num=1;
            break;
        }
        else {
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
}