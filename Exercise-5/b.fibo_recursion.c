/*b. Write a function with a	parameter	n	that	returns	the	n'th Fibonacci	number.	
The	function	must	be	recursive.*/	

#include<stdio.h>
int fibo(int num)
{
    if(num<=1)
    {
        return num;
    }
    return fibo(num-1)+fibo(num-2);    
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int a=fibo(n);
    printf("fibo=%d\n",a);
}