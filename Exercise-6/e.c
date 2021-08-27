// e) Write a program to find greatest among
// (i) Array of Integers (ii) Array of strings using functions.

#include <stdio.h>
#include <string.h>
void greatest_int(int a[], int n)
{
    int max_int = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max_int < a[i])
        {
            max_int = a[i];
        }
    }
    printf("\ngreatest number from an array-a(int) is:%d\n", max_int);
}

void greatest_str(char str[][200], int n_s)
{
    char max_str[200];
    strcpy(str[0], max_str);
    for (int i = 1; i < n_s; i++)
    {
        if (strcmp(max_str, str[i]) < 0)
        {
            strcpy(max_str, str[i]);
        }
    }
    printf("\ngreatest string from an array-str is:%s\n", max_str);
}

int main()
{
    int n, n_s;
    printf("\nEnter number of integers:");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter integers in respective index:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\na[%d]=", i);
        scanf("%d", &a[i]);
    }
    greatest_int(a, n);
    printf("\nEnter number of strings:");
    scanf("%d", &n_s);
    char str[n_s][200];
    printf("\nEnter strings in respective index:\n");
    for (int i = 0; i < n_s; i++)
    {
        printf("\nstr[%d][200]=", i);
        scanf("%s", str[i]);
    }
    greatest_str(str, n_s);
}
