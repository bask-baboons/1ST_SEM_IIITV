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
    int size = sizeof(arr) / sizeof(arr[0]);

    // Initialize min and max with the first element of the array
    int min = *ptr;
    int max = *ptr;
    int sum = 0;

    for (int i = 0; i < size; i++)
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

    double average = (double)sum / size;

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Average: %.2lf\n", average);

    return 0;
}