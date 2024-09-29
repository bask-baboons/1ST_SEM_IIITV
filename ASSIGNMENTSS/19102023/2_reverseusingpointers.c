#include <stdio.h>

void fill(int *ptr, int n)
{
    int x;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements of arr: \n");
        scanf("%d", &x);
        *(ptr + i) = x;
    }
}

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void rev(int *ptr, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        swap(ptr + i, ptr + (n - i - 1));
    }
}

void print(int *ptr, int n)
{
    printf("Array\n{");
    for (int i = 0; i < n; i++)
    {
        printf("%d,", *(ptr + i));
    }
    printf("\b}\n");
}

int main()
{
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