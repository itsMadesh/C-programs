#include <stdio.h>
#include <string.h>

void rep(char *a, char *b, int ast, int bst, int bend)
{
    for (int i = bst; i < bend; i++)
    {
        a[ast++] = b[i];
    }
    a[ast] = '\0';
}
void replace(char string[], char from[], char to[])
{
    int as = strlen(string);
    int bs = strlen(from);
    int cs = strlen(to);
    char s[as - bs + cs - 1];
    int i, j, k;
    for (i = 0; i < as; i++)
    {
        for (j = 0, k = i; j < bs; j++, k++)
        {
            if (string[k] == from[j])
            {
                continue;
            }
            else
            {
                break;
            }
        }
        if (j == bs)
        {
            break;
        }
    }
    if (j != bs)
        return;
    rep(s, string, 0, 0, i);
    rep(s, to, i, 0, cs);
    rep(s, string, i + cs, i + bs, as);
    strcpy(string, s);
}

void replaceAll(char string[], char from[], char to[])
{
    int i = 3;
    while (i)
    {
        char temp[strlen(string)];
        strcpy(temp, string);
        replace(string, from, to);
        if (strcmp(string, temp) == 0)
        {
            break;
        }
    }
}

int main()
{
    char str[200], from[200], to[200];
    printf("Enter a string:");
    gets(str);
    printf("\nEnter 'from' string:");
    gets(from);
    printf("\nEnter 'to' string:");
    gets(to);
    printf("\nOriginal string:%s", str);
    replaceAll(str, from, to);
    printf("\n");
    printf("Modified string:%s", str);
}