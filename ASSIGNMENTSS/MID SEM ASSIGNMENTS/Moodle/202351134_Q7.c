// Program to find greatest in 3 numbers.
/*Author: Sivajeet Sabdakar
Date: 21-09-2023
Input: a,b,c(int)
Output: greatest(int)*/

#include <stdio.h>

int main()
{
    // Take 3 inputs
    int a, b, c;
    printf("Enter 3 numbers:");
    scanf("%d,%d,%d", &a, &b, &c);
// Code for printing the greatest number
    if (a >= b && a >= c)
    {
        printf("%d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", c);
    }

    return 0;
}
/*Output:
Enter 3 numbers:1,2,0
2
*/