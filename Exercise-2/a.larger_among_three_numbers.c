//a. To determine the largest among three integers given by user

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);
    if(a==b && b==c)
    {
        printf("All are greatest");
    }
    if(a>b && a>c)
    {

        printf("a is the largest among three integers");
    }
    else if(b>a && b>c)
    {
        printf("b is the largest among three integers");
    }
    else if(a==c)
    {
        printf("a and c both are greatest");
    }
    else if(b==c)
    {
        printf("b and c both are greatest");
    }
    else if (a==b)
    {
        printf("a and b both are greatest");
    }
    else
    {
        printf("c is the largest among three integers");
    }
    return 0;
    
}