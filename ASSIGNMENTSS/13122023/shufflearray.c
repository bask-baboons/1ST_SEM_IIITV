#include <stdio.h>

// arr [a1, a2, a3, a4,...,an,...,b1, b2, b3, b4,...,bn] ==> arr [a1, b1, a2, b2, a3, b3,...,an, bn]

void shuffle(int arr[], int n)
{
    int shuffled_array[2 * n];
    int i, j;

    for (i = 0, j = 0; i < n; i++, j += 2)
    {
        shuffled_array[j] = arr[i];
        shuffled_array[j + 1] = arr[i + n];
    }

    for (i = 0; i < 2 * n; i++)
    {
        arr[i] = shuffled_array[i];
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]) / 2;

    shuffle(arr, n);

    for (int i = 0; i < 2 * n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
