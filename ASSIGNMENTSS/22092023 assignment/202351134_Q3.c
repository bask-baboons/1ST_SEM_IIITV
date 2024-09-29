// Program to calculate sum of 5 subjects and find percentage.
/*Author: Sivajeet Sabdakar
Date: 21-09-2023
Input: a,b,c,d,e(float)
Output: sum(float)*/ 
// Take 5 inputs and then sum up in printf line
#include <stdio.h>
int main ()
{  
    float a,b,c,d,e;
    
    printf("Enter the 5 subject's marks out of 100):");
    scanf("%f,%f,%f,%f,%f", &a,&b,&c,&d,&e);

float sum=a+b+c+d+e;

    printf("The sum is:%f", sum);
    printf("\nAnd Percentage:%.2f", (sum*100)/500);
    
    return 0;
}
/*Output:
Enter the 5 subject's marks out of 100):98,97,96,98,99
The sum is:488.000000
And Percentage:97.60*/