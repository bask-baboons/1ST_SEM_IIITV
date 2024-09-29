// Program to call function within function 5 times using Recursion
// Author: Sivajeet Sabdakar
// Date: 12-10-2023

#include <stdio.h>

void recursiveFunction(int n) {
    if (n <= 0) {
        return; // Base case: Stop the recursion when n is 0 or negative
    }
    
    printf("Function call %d\n", 6 - n);

    // Recursive call: Decrease n by 1 and call the function again
    recursiveFunction(n - 1);
}

int main() {
    int n = 5; // Number of times to call the function
    recursiveFunction(n);

    return 0;
}

/*Output:
Function call 1
Function call 2
Function call 3
Function call 4
Function call 5
*/

