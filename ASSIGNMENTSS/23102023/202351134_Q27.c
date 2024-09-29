/*
Program 27: Implement the bubble sort algorithm.
Author: Sivajeet Sabdakar
Date: 20-10-2023
*/

#include <stdio.h>

void bubbleSortAscending(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortDescending(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter n:\n");
    scanf("%d", &n);

    printf("Enter the n elements:\n");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    bubbleSortAscending(arr, n);
    printf("\nAscending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    bubbleSortDescending(arr, n);
    printf("\nDescending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
/*Output:
Enter n:
6
Enter the n elements:
9 5 4 2 8 6
Original array: 9 5 4 2 8 6
Ascending order: 2 4 5 6 8 9
Descending order: 9 8 6 5 4 2 
*/