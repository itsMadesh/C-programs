//h.Program to print last 50 characters.



#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char ch;
    fp=fopen("C-Assignments/h.txt","r");
    fseek(fp,0,SEEK_END);
    int total_len=ftell(fp);
    int start_len=total_len-50;
    fseek(fp,start_len,SEEK_SET);
    while((ch=getc(fp))!=EOF)
    {
        printf("%c",ch);
    }
}