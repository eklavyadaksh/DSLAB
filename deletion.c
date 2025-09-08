#include <stdio.h>

int main() {
    int n, k;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[100]; 

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter position to delete : ");
    scanf("%d", &k);

    if (k < 1 || k > n) {
        printf("Invalid position!\n");
        return 0;
    }

    
    for (int j = k - 1; j < n - 1; j++) {
        a[j] = a[j + 1];
    }

    n--; 

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}