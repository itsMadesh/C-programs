/*a.Write a function int* generateprimes(int limit) to generate all the prime numbers between 2 
and some given limit and return them as an array. 
Print all elements from array.*/

#include <stdio.h>
#include <stdlib.h>
int *generateprimes(int n)
{
    int k = 0;
    static int prime[1000];
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
            prime[k] = i;
            k++;
        }
    }
    return prime;
}

int main()
{

    int n, *l;
    printf("Enter a limit:");
    scanf("%d", &n);
    l = generateprimes(n);
    printf("Prime numbers between 2 to %d:\n", n);
    for (int i = 0; l[i] != '\0'; i++)
    {
        printf("%d\n", l[i]);
    }
}