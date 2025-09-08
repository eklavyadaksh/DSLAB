#include <stdio.h>

int main() {
    int n, k, item;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[100]; 
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &item);

    printf("Enter position to insert (1-based index): ");
    scanf("%d", &k);

    

    
    for (int j = n; j >= k; j--) {
        a[j] = a[j - 1];
    }

    a[k - 1] = item;  
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}