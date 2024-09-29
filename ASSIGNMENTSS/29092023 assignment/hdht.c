#include <stdio.h>

// Function to print a hollow diamond pattern
void printHollowDiamond(int n) {
    if (n % 2 == 0) {
        n++; // Make sure n is odd for a symmetric diamond
    }
    
    int spaces = n / 2;
    int stars = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= stars; j++) {
            if (j == 1 || j == stars || i == 1 || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        
        printf("\n");

        if (i <= n / 2) {
            spaces--;
            stars += 2;
        } else {
            spaces++;
            stars -= 2;
        }
    }
}
// Function to print a hollow right triangle pattern
void printHollowRightTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == 1 || i == n || i == j) {
                printf("*");
            } else {
                printf(" ");
            }
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

int main() {
    int n;
    printf("Enter the size of the patterns: ");
    scanf("%d", &n);

    printf("Hollow Diamond:\n");
    printHollowDiamond(n);

    printf("\nHollow Right Triangle:\n");
    printHollowRightTriangle(n);

    printf("\nIsosceles Triangle:\n");
    printIsoscelesTriangle(n);
    return 0;
}
