//g. To	reverse	a given word and store it at the end of	the	same array.

#include <stdio.h>
#include <string.h>

int main()
{
    char a[50];
    printf("Enter a word : ");
    scanf("%s", a);
    int len = strlen(a);
    for (int i = len - 1, j = 0; i >= 0; i--, j++)
    {
        a[len + j] = a[i];
    }
    a[len*2]=0;
    printf("Array:%s", a);
}