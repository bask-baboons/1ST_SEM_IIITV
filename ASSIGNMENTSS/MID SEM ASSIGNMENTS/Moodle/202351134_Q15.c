// Program to add two number using pointers.

/*Author: Sivajeet Sabdakar
Date: 27-09-2023
Input: num1, num2 (int)
Output: sum (int)*/

#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;

    // Input the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Input the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Assign addresses of num1 and num2 to pointers
    ptr1 = &num1;
    ptr2 = &num2;

    // Add the numbers using pointers
    int sum = *ptr1 + *ptr2;

    // Display the result
    printf("Sum of %d and %d is %d\n", *ptr1, *ptr2, sum);

    return 0;
}

/*Output:
Enter the first number: 45
Enter the second number: 32
Sum of 45 and 32 is 77
*/