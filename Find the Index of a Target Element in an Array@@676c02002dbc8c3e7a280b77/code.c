#include <stdio.h>

int main() {
    int arr[20], i, j, size, target, found = 0;

    scanf("%d", &size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    for(j = 0; j < size; j++) {
        if(arr[j] == target) {
            printf("%d\n", j);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("-1\n");
    }

    return 0;
}
