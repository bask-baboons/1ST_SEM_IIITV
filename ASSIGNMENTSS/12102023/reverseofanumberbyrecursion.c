#include <stdio.h>

int reverseNumber(int n, int rev) {
    if (n == 0) {
        return rev;
    } else {
        int rem = n % 10;
        rev = rev * 10 + rem;
        return reverseNumber(n / 10, rev);
    }
}

int main() {
    int n, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    rev = reverseNumber(n, rev);

    printf("Reversed number: %d\n", rev);

    return 0;
}   