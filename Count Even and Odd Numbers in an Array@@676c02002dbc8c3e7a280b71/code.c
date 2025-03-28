#include <stdio.h>

int main() {
    int a, arr[100], even = 0, odd = 0, i;

    scanf("%d", &a);

    for (i = 0; i < a; i++) {  
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < a; i++) {  
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("%d %d", even, odd);

    return 0;  // Added return statement
}
