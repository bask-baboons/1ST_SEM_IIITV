/*
Program 23: Call by value and call by reference in finding the root of a quadratic equation ax^2 + bx + c = 0 using a function.
Author: Sivajeet Sabdakar
Date: 20-10-2023
*/

#include <stdio.h>
#include <math.h>

// Function to find the roots of a quadratic equation using call by value
void findRootsByValue(float a, float b, float c) {
    float discriminant, root1, root2;
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1 = %.2f and Root 2 = %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Root 1 = Root      2 = %.2f\n", root1);
    } else {
        printf("No real roots\n");
    }
}

// Function to find the roots of a quadratic equation using call by reference
void findRootsByReference(float a, float b, float c, float* root1, float* root2, float*discriminant) {
    // float discriminant;
    *discriminant = b * b - 4 * a * c;

    if (*discriminant > 0) {
        *root1 = (-b + sqrt(*discriminant)) / (2 * a);
        *root2 = (-b - sqrt(*discriminant)) / (2 * a);
    } else if (*discriminant == 0) {
        *root1 = *root2 = -b / (2 * a);
    }
    // No need to handle the case of no real roots because the roots are returned by reference.
}

int main() {
    float a, b, c, root1, root2, discriminant;
    
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Call by value
    printf("Using call by value:\n");
    findRootsByValue(a, b, c);

    // Call by reference
    printf("Using call by reference:\n");
    findRootsByReference(a, b, c, &root1, &root2, &discriminant);
        if (discriminant<0)
        {
        printf("No real roots\n");
        }
        else {
        printf("Root 1 = %.2f and Root 2 = %.2f\n", root1, root2);
    }


    return 0;
}
/*Output:
Enter coefficients a, b, and c: 1 -4 3
Using call by value:
Root 1 = 3.00 and Root 2 = 1.00      
Using call by reference:
Root 1 = 3.00 and Root 2 = 1.00 
*/