/*
Program 26: Store the numbers stored in an array in reverse order.
Author: Sivajeet Sabdakar
Date: 20-10-2023
*/

#include <stdio.h>

// Function to fill an array using a pointer
void fill(int *ptr, int n) {
    int x;
    for (int i = 0; i < n; i++) {
        printf("Enter the elements of arr: \n");
        scanf("%d", &x);
        *(ptr + i) = x;
    }
}

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

// Function to print an array using a pointer
void print(int *ptr, int n) {
    printf("Array\n{");
    for (int i = 0; i < n; i++) {
        printf("%d,", *(ptr + i));
    }
    printf("\b}\n"); // '\b' is used to remove the trailing comma
}

int main() {
    int n, x;

    printf("Enter the size of array: \n");
    scanf("%d", &n);
    int arr[n];
    fill(arr, n);
    print(arr, n);
    rev(arr, n);
    print(arr, n);

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