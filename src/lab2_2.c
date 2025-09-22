#include <stdio.h>

/*
    Task:
    Write a function long long factorial(int n) that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

#include <stdio.h>

long long factorial(int n) {
    long long factor = 1;
    for (int i = 1; i <= n; i++) {
        factor *= i;
    }
    return factor;
}

int main(void) {
    int n;

    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: n must be non-negative.\n");
        return 1; // exit with error
    }

    long long result = factorial(n);
    printf("%d! = %lld\n", n, result);

    return 0;
}