/*
Program 24: Calculate the average and find the minima and maxima of the numbers stored in an array.
Author: Sivajeet Sabdakar
Date: 20-10-2023
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter n:\n");
    scanf("%d", &n);

    printf("Enter the n elements:\n");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;

    // Initialize min and max with the first element of the array
    int min = *ptr;
    int max = *ptr;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (*ptr < min)
        {
            min = *ptr;
        }

        if (*ptr > max)
        {
            max = *ptr;
        }

        sum += *ptr;
        ptr++; // Move the pointer to the next element
    }

    double average = (double)sum / n;

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Average: %.2lf\n", average);

    return 0;
}
/*Output:
Enter n:
6
Enter the n elements:
1 8 6 4 7 5
Minimum: 1
Maximum: 8
Average: 5.17
*/