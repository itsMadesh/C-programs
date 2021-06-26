/*c. To	receive	an array of 15 numbers as input and determined the ‘n’th	
largest	number from it.	(‘n’ is also user defined)*/

#include <stdio.h>
void main()
{
    int N = 15;
    int a[N], i, n, swap;
    for (i = 0; i < N; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (a[i] < a[j])
            {
                swap = a[i];
                a[i] = a[j];
                a[j] = swap;
            }
        }
    }
    printf("Enter a number:");
    scanf("%d", &n);
    printf("%dth largest number from an array is:%d", n, a[n - 1]);
}