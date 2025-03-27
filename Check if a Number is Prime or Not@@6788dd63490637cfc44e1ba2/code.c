#include <stdio.h>

int main() {
    int a, i, n = 1;
    
    scanf("%d", &a);

    if (a < 2) {
        printf("Not Prime");
        return 0;
    }

    for (i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            n = 0;
            break;
        }
    }

    if (n == 1) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}
