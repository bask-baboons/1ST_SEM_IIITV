/*#include <stdio.h>

float squareRoot(float num) {
    float x = num;
    float y = 1.0;  // Initial guess

    // Iterate until the absolute difference between x and y is less than a small value (e.g., 0.0001)
    while (x - y > 0.0001) {
        x = (x + y) / 2;  // Calculate the average of x and y
       
        y = num / x;      // Update y by dividing the number by the new x value
       
    }

    return x;
}

int main() {
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    if (num < 0) {
        printf("Square root is not defined for negative numbers.\n");
    } else {
        float result = squareRoot(num);
        printf("Square root of %.2f is approximately %.4f\n", num, result);
    }

    return 0;
}
*/

#include <stdio.h>
int main()
{
    printf("Enter the number you want the square root of:");
	int n,c=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        if (i*i==n)
        {
            c=i;
        }
        
    }
    if (c==0)
    {
        printf("The number is not a perfect square");
    }
    else {
    printf("The square root is :%d",c);
}
}

/*Output 1:
Enter the number you want the square root of:64
The square root is :8
Output 2:
Enter the number you want the square root of:24
The number is not a perfect square
*/