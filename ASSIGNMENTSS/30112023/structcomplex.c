#include <stdio.h>
struct complex
{
    float real;
    float imag;
};
typedef struct complex complex_no;


int main()
{
    complex_no num1, num2;
    // complex_no sum;

    printf("Enter real n imag parts of 1st no.\n");
    printf("Real part:");
    scanf("%f", &num1.real);
    printf("Imaginary part:");
    scanf("%f", &num1.imag);
    
    printf("\nEnter real n imag parts of 2nd no.");
    printf("\nReal part:");
    scanf("%f", &num2.real);
    printf("Imaginary part:");
    scanf("%f", &num2.imag);

    // sum.real=num1.real+num2.real;
    // sum.imag=num1.imag+num2.imag;

    printf("The sum is %.2f + %.2fi\n", num1.real+num2.real,num1.imag+num2.imag);
}
