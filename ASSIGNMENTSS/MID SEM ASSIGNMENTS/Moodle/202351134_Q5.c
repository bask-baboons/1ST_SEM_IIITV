// Program to reverse the digits of a given number.
/*Author: Sivajeet Sabdakar
Date: 21-09-2023
Input: rem,rev,n(int)
Output: reversed number(int)*/ 

#include <stdio.h>
int main()
{
    // define n , rev, and rem; take a number as input
    int n, rev = 0, rem;
    printf("Enter a number:");
        scanf("%d", &n);

// using loop, divide by 10 and store the remainder
    while (n != 0)
    {
        rem = n % 10;
        // now add the remainder to the product of rev and 10
        rev = rev*10+rem;
        // then take quotient of n by 10 and repeat
        n=n/10;
    }
// Print the reversed number
    printf("Reversed number:%d", rev);

    return 0;
}
/*Output:
Enter a number:4568
Reversed number:8654
*/