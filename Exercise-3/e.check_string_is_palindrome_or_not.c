//e. to check whether a given word is palindrome or not.

#include<stdio.h>
#include<string.h>

int check_palindrome(char a[], int len)
{
    int var=1;
    for(int i=0;i<len/2;i++)
    {
        if(a[i]!=a[len-i-1])
        {
            var=0;
            break;
        }
    }
    return var;
}

int main()
{
    char a[50],check,len;
    printf("Enter a string:");
    scanf("%s", a);
    len=strlen(a);
    check=check_palindrome(a,len);
    if(check==0)
        printf("%s is not palindrome", a);
    else
        printf("%s is  palindrome", a);
}