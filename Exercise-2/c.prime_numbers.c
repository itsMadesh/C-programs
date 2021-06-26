//c. To print all prime numbers from 0 to a given number ‘n’

#include <stdio.h>
int main()
{
    int s,n;
    printf("Enter a starting range other than 0 and 1:");
    scanf("%d", &s);
    printf("Enter a ending range:");
    scanf("%d", &n);
    printf("prime numbers between %d and %d : ", s, n);
    for (int i = 2; i <= n; i++)
    {
        int c = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                c++;
                break;
            }
        }
        if (c == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}