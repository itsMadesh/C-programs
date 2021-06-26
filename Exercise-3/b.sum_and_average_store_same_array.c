//b. To	take an	integer	array	input of size 10, and to store	the	sum	and	average
//of the values in the subsequent locations of the same array.


#include <stdio.h>
int main()
{
    int N=12, i, sum = 0;
    float a[N];
    printf("Enter a value in an respective index:\n");
    for (i = 0; i < 10; i++)
    {
        printf("a[%d]=", i);
        scanf("%f", &a[i]);
        sum += a[i];
    }
    a[10] = sum;
    a[11] = a[10] / 10.0;
    for (i = 10; i < N; i++)
    {
        printf("%.2f ", a[i]);
    }
}