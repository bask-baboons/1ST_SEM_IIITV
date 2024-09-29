// Program to find whether given no. is a prime no. or not.

/*Author: Sivajeet Sabdakar
Date: 27-09-2023
Input: num (int)
Output: Prime or Not (bool)*/


#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;  // 0 and 1 are not prime numbers
    }
    if (num <= 3) {
        return true;   // 2 and 3 are prime numbers
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;  // Numbers divisible by 2 or 3 are not prime
    }

    // Check for prime numbers using 6k +/- 1 rule
    for (int i = 5; i * i <= num; i =i+ 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}

/*Output 1:
Enter a number: 86
86 is not a prime number.
Output 2
Enter a number: 79
79 is a prime number.
*/