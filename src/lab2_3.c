#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;  

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }

    return 1; // prime
}

int main(void) {
    int n;

    printf("Enter an integer n (>= 2): ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Invalid input. Please write an integer >= 2.\n");
        return 1;
    }

    printf("Prime numbers up to %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
