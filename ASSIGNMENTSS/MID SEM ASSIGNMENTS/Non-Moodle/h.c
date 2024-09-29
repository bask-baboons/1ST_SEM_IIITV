#include<stdio.h>
int main(int argc, char const *argv[])
{
    int h,l,r,temp;
    int num1=12,num2=6;
    h = 12, l = 6;
    //gcd(a,b) = gcd(b,r)
    while (r!=0)
    {
        temp = r;
        r = h%l;
        h = l;
        if(r == 0)
        {
            break;
        }
        l = r;
    }
    printf("HCF is %d",l);
    return 0;
}
