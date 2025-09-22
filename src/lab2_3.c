#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int n;

    printf("Write an integer n (>= 2): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Error: Please write an integer greater than or equal to 2.\n");
    } else {
        printf("Prime numbers up to %d are:\n", n);
        for (int i = 2; i <= n; i++) {
            if (is_prime(i)) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}
