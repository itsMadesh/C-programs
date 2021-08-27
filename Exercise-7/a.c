//a. Write a program to	count a number of words and characters in a file.

#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char ch, file_name[500];
    int words_count = 0, chars_count = 0;
    printf("Enter a file name to read:");
    scanf("%s", file_name);
    fp = fopen(file_name, "r");
    if (fp == NULL)
    {
        printf("File-%s could not be opened", file_name);
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        chars_count++;
        if (ch == ' ' || ch == '\t' || ch == '\0' || ch == '\n')
        {
            words_count++;
        }
    }
    if (chars_count > 0)
    {
        words_count++;
    }
    printf("Number of words in given file:%d\nNumber of characters in given file:%d", words_count, chars_count);
    fclose(fp);
}