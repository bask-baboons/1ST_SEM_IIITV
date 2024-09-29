    /*Author: Sivajeet Sabdakar
    Date: 27-09-2023
    */ 

    #include <stdio.h>

    // Function to calculate HCF
    int calculateHCF(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    // Function to calculate LCM using HCF
    int calculateLCM(int a, int b) {
        int hcf = calculateHCF(a, b);
        int lcm = (a * b) / hcf;
        return lcm;
    }

    int main() {
        int num1, num2;
        
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        
        int hcf = calculateHCF(num1, num2);
        int lcm = calculateLCM(num1, num2);
        
        printf("HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);
        printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
        
        return 0;
    }

    /*Output:
    Enter two numbers: 44 84
    HCF (GCD) of 44 and 84 is: 4
    LCM of 44 and 84 is: 924
    */