#include<stdio.h>
int main()
{
    int a,b, value=1;
    printf("Enter base number and power:");
    scanf("%d %d",&a,&b);
    if (b==0)
    {
        printf("%d ^ %d = 1",a,b);
    }
    
    else if(b>0)
    {
        for (int i=1;i<=b;i++)
        {
            value*=a;
        }
        printf("%d ^ %d = %d",a,b,value);
    }
    else
    { 
        printf("Invalid Input");
    }    
    return 0;
}