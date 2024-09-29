#include <stdio.h>

int is_prime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int digits_increasing_order(int n) {
    int last_digit = n % 10;
    n /= 10;
    while (n > 0) {
        int current_digit = n % 10;
        if (current_digit >= last_digit) {
            return 0;
        }
        last_digit = current_digit;
        n /= 10;
    }
    return 1;
}

int main() {
    printf("Prime numbers with increasing digits in the range 1 to 1000:\n");
    for (int number = 1; number <= 1000; ++number) {
        if (is_prime(number) && digits_increasing_order(number)) {
            printf("%d\n", number);
        }
    }

    return 0;
}
