/*d Write a function GCD (greatest common divisor) that	accepts	two	integers and returns-
1 if both the integers are zero, otherwise it returns their GCD*/

#include <stdio.h>
#include <string.h>
int gcd_find(int a, int b)
{
    int min = a < b ? a : b;
    int gcd;
    if (a == 0 && b == 0)
    {
        return -1;
    }
    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
int main()
{
    int a, b;
    printf("Enter a value for a:");
    scanf("%d", &a);
    printf("Enter a value for b:");
    scanf("%d", &b);
    printf("GCD of %d and %d is %d", a, b, gcd_find(a, b));
}