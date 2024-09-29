// Program to convert temperature from degree centigrade to Fahrenheit.
/*Author: Sivajeet Sabdakar
Date: 21-09-2023
Input: temp_c(float)
Output: Fahrenheit temp(float)*/ 
// Take input as celcuis temp and use conversion formula to convert into fahranheit
#include <stdio.h>
int main ()
{  
    float temp_c;
    
    printf("Enter the temperature(°C):");
    scanf("%f", &temp_c);

    printf("The temperature is:%.1f°F", 9/5*temp_c+32);

    return 0;
}
/*Output:
Enter the temperature(┬░C):58.65
The temperature is:90.7┬░F*/