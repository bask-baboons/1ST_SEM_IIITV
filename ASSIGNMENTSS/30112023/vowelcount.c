#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char inputString[100];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    int vowelCount[5] = {0}; // a, e, i, o, u

    for (int i = 0; i < strlen(inputString); i++) {
        char currentChar = inputString[i];

        switch(tolower(currentChar)) {
            case 'a':
                vowelCount[0]++;
                break;
            case 'e':
                vowelCount[1]++;
                break;
            case 'i':
                vowelCount[2]++;
                break;
            case 'o':
                vowelCount[3]++;
                break;
            case 'u':
                vowelCount[4]++;
                break;
        }
    }

    printf("\nCount of each vowel:\n");
    printf("A/a: %d\n", vowelCount[0]);
    printf("E/e: %d\n", vowelCount[1]);
    printf("I/i: %d\n", vowelCount[2]);
    printf("O/o: %d\n", vowelCount[3]);
    printf("U/u: %d\n", vowelCount[4]);

    return 0;
}
