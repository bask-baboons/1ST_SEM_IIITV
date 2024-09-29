// Program to find that entered year is leap year or not.
/*Author: Sivajeet Sabdakar
Date: 21-09-2023
Input: year(int)
Output: whether year is leap year or not*/ 

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);
// if an year is perfectly divisible by 4, but not by 100,
// but could be by 400; then it is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
/*Output1:
Enter a year: 2022
2022 is not a leap year.
Output2:
Enter a year: 1996
1996 is a leap year.
*/