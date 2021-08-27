//e.Write a program to find the sum of N integer numbers using command line arguments.


#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
    int sum=0,i;
    for(i=1;i<argc;i++)
    {
        sum+=atoi(argv[i]);
    }
    printf("Sum of %d integer numbers is:%d",argc-1,sum);
}