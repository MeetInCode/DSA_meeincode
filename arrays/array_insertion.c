#include <stdio.h>

int main() {
    // Step 1: Initialize an array with some elements
    int arr[100] = {10, 20, 30, 40, 50}; // Array with 5 elements, max size 100
    int n = 5; // Current number of elements in the array
    int i, position, element;

    // Step 2: Input the element to be inserted and the position
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    printf("Enter the position where the element is to be inserted: ");
    scanf("%d", &position);

    // Step 3: Validate the position (position should be between 1 and n+1)
    if (position < 1 || position > n + 1) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", n + 1);
        return 1; // Exit the program
    }

    // Step 4: Shift elements to the right to make space for the new element
    for (i = n - 1; i >= position - 1; i--) {
        arr[i + 1] = arr[i];
    }

    // Step 5: Insert the new element at the specified position
    arr[position - 1] = element;

    // Step 6: Increment the size of the array
    n++;

    // Step 7: Print the array after insertion
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
