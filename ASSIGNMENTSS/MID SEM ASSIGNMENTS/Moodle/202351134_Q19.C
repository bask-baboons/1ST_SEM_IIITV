// Program to find the factorial (5*4*3*2*1) using Recursion
//Author: Sivajeet Sabdakar
// Date: 12-10-2023

#include <stdio.h>

int factorial(int n) {
    if (n <= 1) {
        return 1; // Base case: Factorial of 0 and 1 is 1
    }
    return n * factorial(n - 1); // Recursive case: Multiply n by factorial of (n-1)
}

int main() {
    int n = 5; // The number for which you want to find the factorial
    int result = factorial(n);
    printf("The factorial of %d is %d\n", n, result);
    return 0;
}

/*Output:
The factorial of 5 is 120
*/