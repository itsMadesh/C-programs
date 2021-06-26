//a. To	determine the sum of 10	integers in	an input array

#include<stdio.h>
void main()
{
    int a[10],sum=0;
    printf("Enter a value in an respective index:\n");
    for(int i=0;i<10;i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    printf("Sum of the array values is:%d", sum);

}