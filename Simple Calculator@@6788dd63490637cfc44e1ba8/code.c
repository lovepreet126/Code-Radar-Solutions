#include <stdio.h>

int main() {
    int a, b, d;
    char c;

    scanf("%d %d %c", &a, &b, &c); 

    if (c == '+') {
        d = a + b;
        printf("%d", d);
    } 
    else if (c == '*') {
        d = a * b;
        printf("%d", d);
    } 
    else if (c == '/') {
        if (b == 0) {
            printf("error");
        } else {
            d = a / b;
            printf("%d", d);
        }
    } 
    else if (c == '-') {
        d = a - b;
        printf("%d", d);
    } 
    else {
        printf("Invalid operator");
    }

    return 0;
}
