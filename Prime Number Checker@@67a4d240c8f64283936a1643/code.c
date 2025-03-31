 int isPrime(int numb) {
    if (numb < 2) {
        printf("not prime\n");
        return 0;
    }

    for (int i = 2; i * i <= numb; i++) {
        if (numb % i == 0) {
            printf("not prime\n");
            return 0;
        }
    }

    printf("prime\n");
}