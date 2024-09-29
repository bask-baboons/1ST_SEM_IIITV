// Program to print Fibonacci series up to 100.

/*Author: Sivajeet Sabdakar
Date: 27-09-2023
Input: N/A
Output: Fibbonaci Series upto 100*/

#include <stdio.h>

int main() {
    int num1 = 0, num2 = 1, nextTerm;

    printf("Fibonacci Series up to 100:\n");

    while (num1 <= 100) {
        printf("%d, ", num1);
        nextTerm = num1 + num2;
        num1 = num2;
        num2 = nextTerm;
    }

    printf("\n");

    return 0;
}

/*Output:
Fibonacci Series up to 100:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 
*/