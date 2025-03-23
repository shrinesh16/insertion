#include <stdio.h>

// Function to insert an element at a given position
void insertElement(int arr[], int *size, int element, int position) {
    if (position < 0 || position > *size) {
        printf("Invalid position!\n");
        return;
    }

    // Shifting elements to the right
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element at position
    arr[position] = element;
    (*size)++; // Increase array size
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50}; // Array with capacity 10
    int size = 5; // Current size of array

    printf("Original Array: ");
    printArray(arr, size);

    int element = 25, position = 2; // Insert 25 at index 2
    insertElement(arr, &size, element, position);

    printf("Array after insertion: ");
    printArray(arr, size);

    return 0;
}
