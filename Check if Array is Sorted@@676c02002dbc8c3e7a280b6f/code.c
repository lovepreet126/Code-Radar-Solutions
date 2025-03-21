#include<stdio.h>

int main() {
    int a, i, j, num = 0;
    scanf("%d", &a);  // Read the size of the array
    int arr[a];  // Declare the array

    // Input array elements
    for(i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    
    if(a == 1) {
        // If there's only one element, it's considered sorted
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
    return 0;
}
