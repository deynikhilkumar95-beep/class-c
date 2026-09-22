// WAP to find the sumof all element of an array 
#include <stdio.h>
int main() {
    int a, n, i, sum = 0;
    printf("Enter the number of array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("Sum of all elements = %d", sum);
    return 0;
}

