/*#include <stdio.h>

int main() {
    int n, i;
    long long int first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%lld", next);

        if (i < n - 1)
            printf(", ");
        else
            printf("\n");
    }

    return 0;
}
*/


#include <stdio.h>

long long int fibonacci(int n) {
    if (n <= 1)
        return n;
    
    long long int first = 0, second = 1, next;

    for (int i = 2; i <= n; i++) {
        next = first + second;
        first = second;
        second = next;
    }

    return second;
}
int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
    } else {
        long long int result = fibonacci(n);
        printf("The %dth term of the Fibonacci sequence is: %lld\n", n, result);
    }

    return 0;
}
