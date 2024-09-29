/*
Program 25: Access the array elements using pointer addresses instead of array addresses.
Author: Sivajeet Sabdakar
Date: 20-10-2023
*/

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &*(arr+i));
    }

    printf("Elements in the array using pointer addresses:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: %d\n", i, *(arr+i));
    }

    return 0;
}
/*Output:
Enter 5 elements:
1 4 6 9 5
Elements in the array using pointer addresses:
Element 0: 1
Element 1: 4
Element 2: 6
Element 3: 9
Element 4: 5
*/