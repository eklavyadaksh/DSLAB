#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50}; // array declaration and initialization
    int i;

    printf("Array elements are:\n");
    
    // Traversal using for loop
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]); // accessing each element
    }

    return 0;
}