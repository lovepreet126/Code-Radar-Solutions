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
        #include<stdio.h>

int main() {
    int a, i, j, num = 0;
    scanf("%d", &a);
    int arr[a];
    
    for(i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    
    if(a == 1) {
        printf("Sorted");
    } else {
        for(j = 0; j < a - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                num = 1;
                break;
            }
        }
        
        if(num == 1) {
            printf("Not Sorted");
        } else {
            printf("Sorted");
        }
    }
}

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