//g. To	determine the larger of two given numbers.

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two number :");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        printf("%d is the larger of two given numbers", a);
    }
    else
    {
        printf("%d is the larger of two given numbers", b);
    }
    return 0;
}
