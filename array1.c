// WAP to copy the element of one array into another and display the copy array.
#include <stdio.h>
int main() {
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int a[n], b[n, i;
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        b[i] = a[i];
    }
    printf("Copy array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}

