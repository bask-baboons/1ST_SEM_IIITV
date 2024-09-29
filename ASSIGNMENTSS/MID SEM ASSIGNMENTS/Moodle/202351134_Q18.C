// Program to sum the arithmetic series (5+4+3+2+1) using Recursion
//Author: Sivajeet Sabdakar
// Date: 12-10-2023

#include <stdio.h>

int sumArithmeticSeries(int n) {
    if (n == 1) {
        return 1;  // Base case: The sum of a single number is the number itself.
    } else {
        return n + sumArithmeticSeries(n - 1); // Recursive case: Add the current number and call the function with n-1.
    }
}

int main() {
    int n = 5; // The number of terms in the series

    int result = sumArithmeticSeries(n);

    printf("The sum of the arithmetic series is: %d\n", result);

    return 0;
}

/*Output:
The sum of the arithmetic series is: 15
*/