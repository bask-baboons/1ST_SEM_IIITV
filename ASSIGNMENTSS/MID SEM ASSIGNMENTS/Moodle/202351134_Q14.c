// Program to find whether given no. is a prime no. or not.

/*Author: Sivajeet Sabdakar
Date: 27-09-2023
Input: num (int)
Output: Prime or Not (bool)*/

#include <stdio.h>

// Function to check whether a number is prime or not
int isPrime(int num)
{
    if (num <= 1)
    {
        return 0; // Not a prime number
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0; // Not a prime number
        }
    }

    return 1; // Prime number
}

int main()
{
    int number;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is prime or not
    if (isPrime(number))
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

/*Output 1:
Enter a number: 86
86 is not a prime number.
Output 2
Enter a number: 79
79 is a prime number.
*/