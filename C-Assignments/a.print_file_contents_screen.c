//a.Print the contents of a file to screen.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("C-Assignments/a.txt","r");
    if(fp==NULL)
    {
        printf("Given file failed to open");
    }
    else
    {
        printf("The file is opened\n");
        while((ch=fgetc(fp))!=EOF)
        {
            printf("%c",ch);
        }
    }
    fclose(fp);
    printf("\nThe file is closed");
}    