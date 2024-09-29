/*Author: Sivajeet Sabdakar
Date: 27-09-2023
Input: num (int)
Output: Factorial of num (long long int)*/

// Program to find factorial of a number.

#include <stdio.h>

// Function to calculate the factorial of a number
unsigned long long int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    
    // Prompt the user for input
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long int result = factorial(num);
        printf("Factorial of %d is %llu\n", num, result);
    }

    return 0;
}

/*Output:
Enter a non-negative integer: 4
Factorial of 4 is 24
*/