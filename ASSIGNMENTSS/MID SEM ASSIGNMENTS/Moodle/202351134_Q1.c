// Program to find area and circumference of circle.
/*Author: Sivajeet Sabdakar
Date: 21-09-2023
Input: r,π(float)
Output: Circumference and area(float)*/ 
// Take input of radius and use circumference and area formulas

#include <stdio.h>
int main ()
{  
    float r;
    float π=3.14;
    
    printf("Enter the radius:");
    scanf("%f", &r);

    printf("The circumference is:%f\n", 2*π*r);
    printf("The area is:%f", π*r*r);


    return 0;
}
/*Output:
Enter the radius:5.6
The circumference is:35.167999
The area is:98.470398*/