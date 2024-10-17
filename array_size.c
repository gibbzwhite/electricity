#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

int main() {
    int arr[ARRAY_SIZE];
    int sum = 0;
    float average;

    printf("Enter %d elements for the array:\n", ARRAY_SIZE);
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("\n--- Array Elements ---\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("The element at index %d is %d\n", i, arr[i]);
    }

    average = (float)sum / ARRAY_SIZE;

    printf("\nSum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", average);

    return 0;
}