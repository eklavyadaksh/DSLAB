#include <stdio.h>

int main() {
    int a[4] = {4, 1, 3, 2};
    int b[4] = {6, 4, 5, 3};
    
    int c[10];
    int i=0,j=0,k = 0;
    while ( i < 4 && j < 4) {
        if (a[i]== b[j])
            i++;
            j++;
        else
            a[i] = b[j];
    }

}


   
    