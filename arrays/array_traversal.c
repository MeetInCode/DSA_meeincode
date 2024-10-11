#include <stdio.h>

int main() {
    // Declare an integer array with 5 elements
    int numbers[5] = {10, 20, 30, 40, 50};

    // Array traversal using a for loop
    printf("Traversing the array using a for loop:\n");
    for (int i = 0; i < 5; i++) {
        // Access the element at index i and print it
        printf("Element at index %d: %d\n", i, numbers[i]);
    }

    // Array traversal using a while loop
    printf("\nTraversing the array using a while loop:\n");
    int index = 0;
    while (index < 5) {
        // Access the element at index and print it
        printf("Element at index %d: %d\n", index, numbers[index]);
        index++;
    }

    return 0;
}