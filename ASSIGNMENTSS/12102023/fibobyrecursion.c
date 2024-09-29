/*#include <stdio.h>

int fibo(int a)
{
    if (a == 0 || a == 1)
    {
        return a;
    }
    else
    {
        return (fibo(a - 1) + fibo(a - 2));
    } 
    
}
int main()
{
    int a;
    printf("Enter a:");
    scanf("%d", &a);
    // for ( int a = 0; a < n; a++)
    // {
        printf("%d\n", fibo(a));
    // }
    
}*/


#include <stdio.h>

void printFibonacci(int n, int a, int b) {
    if (n > 0) {
        int next = a + b;
        printf("%d ", a);
        printFibonacci(n - 1, b, next);
    }
}

int main() {
    int n;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // if (n <= 0) {
    //     printf("Please enter a positive integer.\n");
    // } else {
    //     printf("Fibonacci Series up to %d terms:\n", n);
    //     printFibonacci(n, 0, 1);
    //     printf("\n");
    // }

    return 0;
}
