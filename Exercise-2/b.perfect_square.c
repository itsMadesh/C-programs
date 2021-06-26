//b. To determine whether a given number is a perfect square or not

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("A negative number cannot be a perfect square number");
    }
    else
    {
        for(int i=0;i<=n/2;i++)
        {
            if(n==i*i)
            {
                printf("%d is a perfect square number", n);
                return 0;
            }
        }
        printf("%d is not a perfect square number", n);
    }  
    return 0;  
}









/*
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    float exp = 0.5;
    float power = pow(n,exp);
    if(power-(int)power==0)
    {
        printf("%d is perfect square",n);
    }
    else{
        printf("%d is not perfect square",n);
    }
}*/
