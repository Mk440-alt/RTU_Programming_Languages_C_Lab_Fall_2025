#include <stdio.h>
#include <limits.h>

int array_min(int arr[], int size);
int array_max(int arr[], int size);
int array_sum(int arr[], int size);
float array_avg(int arr[], int size);

int main(void) {
    int arr[] = {10, 20, 5, 30, 15};
    int size = 5;

    printf("Min: %d\n", array_min(arr, size));
    printf("Max: %d\n", array_max(arr, size));
    printf("Sum: %d\n", array_sum(arr, size));
    printf("Avg: %.2f\n", array_avg(arr, size));

    return 0;
}

int array_min(int arr[], int size) {
    int my_min = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (arr[i] < my_min) {
            my_min = arr[i];
        }
    }
    return my_min;
}

int array_max(int arr[], int size) {
    int my_max = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > my_max) {
            my_max = arr[i];
        }
    }
    return my_max;
}

int array_sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

float array_avg(int arr[], int size) {
    int sum = array_sum(arr, size);
    return (float)sum / size;
}

