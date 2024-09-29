// Program to print stars Sequences (right triangular,Isosceles triangle, etc.).

/*Author: Sivajeet Sabdakar
Date: 27-09-2023
Input: Number of rows (int)
Output: Desired pattern*/

#include <stdio.h>

// Function to print a right-angled triangle pattern
void printRightAngledTriangle(int rows)
{
    int i, j;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// Function to print an isosceles triangle pattern
void printIsoscelesTriangle(int rows)
{
    int i, j, space;
    space = rows - 1;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

// Function to print an inverted right-angled triangle pattern
void printInvertedRightAngledTriangle(int rows)
{
    int i, j;
    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// Function to print a diamond pattern
void printDiamond(int rows)
{
    int i, j, space;
    space = rows - 1;

    // Upper part of the diamond
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    space = 1;

    // Lower part of the diamond
    for (i = rows - 1; i >= 1; i--)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space++;

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{
    while (1)
    {
    
    int choice, rows=10;

    printf("Select a star pattern to print:\n");
    printf("1. Right-Angled Triangle\n");
    printf("2. Isosceles Triangle\n");
    printf("3. Inverted Right-Angled Triangle\n");
    printf("4. Diamond Pattern\n");
    printf("Enter your choice (1/2/3/4): ");
    scanf("%d", &choice);

    printf("Enter the number of rows:%d\n",rows);
    // scanf("%d", &rows);

    switch (choice)
    {
    case 1:
        printRightAngledTriangle(rows);
        break;
    case 2:
        printIsoscelesTriangle(rows);
        break;
    case 3:
        printInvertedRightAngledTriangle(rows);
        break;
    case 4:
        printDiamond(rows);
        break;
    default:
        printf("Invalid choice!\n");
    }
    }
    return 0;
}

/*Output 1:
1. Right-Angled Triangle
2. Isosceles Triangle
3. Inverted Right-Angled Triangle
4. Diamond Pattern
Enter your choice (1/2/3/4): 1
Enter the number of rows: 5
* 
* * 
* * * 
* * * * 
* * * * * 
Output 2:
Select a star pattern to print:
1. Right-Angled Triangle
2. Isosceles Triangle
3. Inverted Right-Angled Triangle
4. Diamond Pattern
Enter your choice (1/2/3/4): 2
Enter the number of rows: 6
     *
    ***
   *****
  *******
 *********
***********
Output 3:
Select a star pattern to print:
1. Right-Angled Triangle
2. Isosceles Triangle
3. Inverted Right-Angled Triangle
4. Diamond Pattern
Enter your choice (1/2/3/4): 3
Enter the number of rows: 8
* * * * * * * * 
* * * * * * * 
* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
Output 4:
Select a star pattern to print:
1. Right-Angled Triangle
2. Isosceles Triangle
3. Inverted Right-Angled Triangle
4. Diamond Pattern
Enter your choice (1/2/3/4): 4
Enter the number of rows: 3
  *
 ***
*****
 ***
  *
*/