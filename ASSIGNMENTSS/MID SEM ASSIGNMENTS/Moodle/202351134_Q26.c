/*
Program 26: Store the numbers stored in an array in reverse order.
Author: Sivajeet Sabdakar
Date: 20-10-2023
*/

#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

// Function to reverse an array using a pointer
void rev(int *ptr, int n) {
    for (int i = 0; i < n / 2; i++) {
        swap(ptr + i, ptr + (n - i - 1));
    }
}


int main() {
    int n, x;

    printf("Enter the size of array: \n");
    scanf("%d", &n);
    int arr[n];
    
    int* ptr=arr;
    printf("Enter the elements of arr: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }
    printf("Array\n{");
    for (int i = 0; i < n; i++) {
        printf("%d,", *(ptr + i));
    }
    printf("\b}\n"); // '\b' is used to remove the trailing comma

    rev(arr, n);
    
    printf("Array\n{");
    for (int i = 0; i < n; i++) {
        printf("%d,", *(ptr + i));
    }
    printf("\b}\n"); // '\b' is used to remove the trailing comma

    return 0;
}
/*Output:
Enter the size of array: 
4
Enter the elements of arr:
7 5 6 4
Enter the elements of arr:
Enter the elements of arr:
Enter the elements of arr:
Array
{7,5,6,4}
Array
{4,6,5,7}
*/