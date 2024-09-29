#include <stdio.h>

void addNumbers(int *a, int *b, int *result)
{
    *result = *a + *b;
}

int main()
{
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    addNumbers(&num1, &num2, &sum);

    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}