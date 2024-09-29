// Program to shift input data by two bits to the left

/*Author: Sivajeet Sabdakar
Date: 27-09-2023
Input: inputData, shiftedData (int)
Output: shiftedData (int)*/

#include <stdio.h>

int main()
{
    int inputData, shiftedData;

    // Prompt the user for input
    printf("Enter an integer: ");
    scanf("%d", &inputData);

    // Shift the input data two bits to the left
    shiftedData = inputData << 2;

    // Print the shifted result
    printf("Input data shifted left by two bits: %d\n", shiftedData);

    return 0;
}
/*Output:
Enter an integer: 10
Input data shifted left by two bits: 40                                                     
*/