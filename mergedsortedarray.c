#include <stdio.h>

int main() {
    int a[4] = {1, 3, 5, 7};
    int b[5] = {2, 4, 6, 8, 10};
    
    int c[9];

    int i = 0, j = 0, k = 0;

    
    while (i < 4 && j < 5) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    
    while (i < 4) {
        c[k++] = a[i++];
    }

    
    while (j < 5) {
        c[k++] = b[j++];
    }

    
    printf("Merged Sorted Array: ");
    for (int x = 0; x < 9; x++) {
        printf("%d ", c[x]);
    }
    printf("\n");

    return 0;
}