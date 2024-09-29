// Program to print the string number 12345 in reverse order
// Author: Sivajeet Sabdakar
// Date: 12-10-2023

#include <stdio.h>

void printReverse(char* str) {
    if (*str == '\0') {
        return;  // Base case: stop recursion at the end of the string
    } else {
        printReverse(str + 1);  // Recurse with the next character
        printf("%c", *str);  // Print the character after returning from recursion
    }
}

int main() {
    char str[] = "12345";

    printf("Original string: %s\n", str);
    printf("Reversed string: ");
    printReverse(str);
    printf("\n");

    return 0;
}

/*Output:
Original string: 12345
Reversed string: 54321
*/