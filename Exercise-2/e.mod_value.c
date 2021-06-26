#include <stdio.h>
int main()
{
    int a, b, rem;
    printf("Enter value of a and b:");
    scanf("%d%d", &a, &b);
    if (b != 0)
    {
      rem = a - (a / b) * b;
      printf("%d mod %d is %d", a, b, rem);
    }
    else
    {
      printf("%d mod %d is undefined", a, b);
    }
    return 0;
}

/*#include<stdio.h>
int main()
{
   int a,b,c=0,i=1;
   printf("Enter value of a and b:");
   scanf("%d%d", &a, &b);
  if(b!=0)
  {
    while((c+b)<=a)
    {
      c=i*b;
      i++; 
    }
    int rem;
    rem=a-c;
    printf("%d mod %d is %d",a,b,rem);
  }
  else
  {
    printf("%d mod %d is undefined", a,b);
  }   
}*/