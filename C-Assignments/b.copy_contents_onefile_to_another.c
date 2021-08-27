// b. Copy the contents of the file to another.

#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("C-Assignments/a.txt","r");
    fp2=fopen("C-Assignments/b.txt","w");
    printf("file-1 and file-2 are opened\n");
    while((ch=fgetc(fp1))!=EOF)
    {
        fprintf(fp2,"%c",ch);
    }
    printf("\nFiles contents are successfully copied");
    fclose(fp1);
    fclose(fp2);
    printf("\nfile-1 and file-2 are closed");
}