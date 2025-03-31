void isPrime(int numb) {
    if (numb < 2) {
        printf("not prime\n");
        return;
    }

    for (int i = 2; i * i <= numb; i++) {
        if (numb % i == 0) {
            printf("not prime\n");
            return;
        }
    }

    printf("prime\n");
}