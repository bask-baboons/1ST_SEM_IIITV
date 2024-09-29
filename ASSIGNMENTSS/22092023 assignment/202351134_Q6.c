// Program to print a table of any number.
/*Author: Sivajeet Sabdakar
Date: 21-09-2023
Input: a(int)
Output: multiplication table*/ 
// using do while loop, and calculation in printf function
#include <stdio.h>

int main()
{
    int a,index=1;
    printf("Enter the number you want mutliplication table of:\n");
    scanf("%d", &a);
do
    {
    printf("%d X %d = %d\n", a, index, a*index);
    index=index+1;

    } while (index<11);

return 0;
}

/*Output:
Enter the number you want mutliplication table of:
5
5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
5 X 4 = 20
5 X 5 = 25
5 X 6 = 30
5 X 7 = 35
5 X 8 = 40
5 X 9 = 45
5 X 10 = 50*/
