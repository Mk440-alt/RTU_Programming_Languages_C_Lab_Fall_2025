#include <stdio.h>

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(void) {
    int n;

    printf("Write a non-negative integer n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: Please write a non-negative integer.\n");
    } else {
        long long result = factorial(n);
        printf("%d! = %lld\n", n, result);
    }

    return 0;
}
