#include <stdio.h>
#include <math.h>

int main()
{
    int isk = 0;
    printf("Enter n:\n");
    int n;
    scanf("%d", &n);
    if (n == 1)
        isk = 1;
    else
    {
        int count_digits = 0;
        int sq_n = n * n;
        while (sq_n)
        {
            count_digits++;
            sq_n /= 10;
        }
        sq_n = n * n;

        for (int r_digits = 1; r_digits < count_digits; r_digits++)
        {
            int eq_parts = pow(10, r_digits);

            if (eq_parts == n)
                continue;

            int sum = sq_n / eq_parts + sq_n % eq_parts;
            if (sum == n)
            {
                isk = 1;
                break;
            }
        }
    }

    if (isk == 0)
        printf("NO");
    else if (isk == 1)
        printf("YES");
    return 0;
}
