// Program to show swap of two no’s without using third variable.
/*Author: Sivajeet Sabdakar
Date: 21-09-2023
Input: a,b(int)
Output: swapped numbers(int)*/ 

#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    // Swapping without a third variable
    // sum a+b and store into a.
    a = a + b;
    // now subtract b from newly stored a ((a+b)-a=b)
    b = a - b;
    // now subtract b from a+b stored in a ((a+b)-b=a)
    a = a - b;

// Print swapped numbers
    printf("After swapping:\n");
    printf("First number: %d\n", a);
    printf("Second number: %d\n", b);

    return 0;
}

/*Output:
Enter the first number: 5
Enter the second number: 6
1156After swapping:
First number: 6
Second number: 5
*/