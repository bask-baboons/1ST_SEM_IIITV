#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, digitCount = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0)
    {
        digitCount++;
        num /= 10;
    }

    num = originalNum;

    while (num != 0)
    {
        int digit = num % 10;
        sum += pow(digit, digitCount);
        num /= 10;
        digitCount--;
    }

    if (sum == originalNum)
    {
        printf("%d is a Disarium number.\n", originalNum);
    }
    else
    {
        printf("%d is not a Disarium number.\n", originalNum);
    }

    return 0;
}
