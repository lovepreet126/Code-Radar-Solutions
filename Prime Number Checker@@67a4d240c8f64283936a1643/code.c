int isPrime(int numb) {
    if (numb < 2) return 0;
    for (int i = 2; i * i <= numb; i++) {
        if (numb % i == 0) return 0;
    }
    return 1;
}