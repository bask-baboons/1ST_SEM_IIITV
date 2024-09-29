#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int num) {
    int originalNum = num, reversedNum = 0, remainder;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return (originalNum == reversedNum);
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int count = 0;

    for (int i = 1; i <= 100000; i++) {
        int originalNum = i;

        if (isPalindrome(originalNum) && isPrime(originalNum)) {
            printf("%d\n", originalNum);
            count++;
        }
    }


    printf("There are %d palindrome prime numbers between 1 and 10^5.\n", count);

    return 0;
}
