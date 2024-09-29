// Program to display arithmetic operator using switch case.

/*Author: Sivajeet Sabdakar
Date: 27-09-2023
Input:  num1, num2 (double); operator (char)
Output: Arithmetic Operation*/

#include <stdio.h>

int main()
{
    char operator;
    double num1, num2, result;

    // Prompt the user for operator input
    printf("Enter an arithmetic operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Prompt the user for two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform the arithmetic operation based on the operator
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Result: %.2lf\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Result: %.2lf\n", result);
        }
        else
        {
            printf("Error: Division by zero\n");
        }
        break;
    default:
        printf("Error: Invalid operator\n");
    }

    return 0;
}

/*Output:
Enter an arithmetic operator (+, -, *, /): + 
Enter two numbers: 45 87
Result: 132.00
*/