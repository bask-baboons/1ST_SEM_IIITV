// Program to print Fibonacci series using Recursion
// Author: Sivajeet Sabdakar
// Date: 12-10-2023

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n; // Base case: Fibonacci of 0 and 1 is the number itself
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case: Sum of the previous two Fibonacci numbers
    }
}

void printFibonacciSeries(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int n = 60
; // Number of terms in the Fibonacci series to print
    printf("Fibonacci series for the first %d terms:\n", n);
    printFibonacciSeries(n);
    return 0;
}

/*Output:
Fibonacci series for the first 10 terms:
0 1 1 2 3 5 8 13 21 34 
*/