#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x) {
            return mid;
        }

        if (arr[mid] > x) {
            return binarySearch(arr, l, mid - 1, x);
        }

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}

int main() {
    int arr[10];
    int n = sizeof(arr) / sizeof(arr[0]);
    srand(time(0)); // Initialization, should only be called once.

    // Populate the array with random numbers between 1 and 100
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
    }

    // Print the original array
    printf("Original array: ");
    printArray(arr, n);

    // Sort the array in ascending order
    sortArray(arr, n);

    // Print the sorted array
    printf("Sorted array: ");
    printArray(arr, n);

    // Ask user for number to search
    int x;
    printf("Enter a number to search: ");
    scanf("%d", &x);

    // Search the number in the array using binary search
    int result = binarySearch(arr, 0, n - 1, x);

    // Print the result
    if (result != -1) {
        printf("Number found at index %d.\n", result);
    } else {
        printf("Number not found.\n");
    }

    return 0;
}
