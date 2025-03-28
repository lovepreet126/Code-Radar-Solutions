#include <stdio.h>

int main() {
    int n, i, arr[100], max = -1, max1 = -1;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > max) {
            max1 = max;
            max = arr[i];
        } else if (arr[i] > max1 && arr[i] != max) {
            max1 = arr[i];
        }
    }

    if (max1 == -1) {
        printf("%d",max1);
    } else {
        printf("%d", max1);
    }

    return 0;
}
