//c.search for a given word in a file

#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp=fopen("C-Assignments/c.txt","r");
    char word[100],fword[100];
    printf("\nEnter a word for search in the file:");
    scanf("%s",word);
    while((fscanf(fp,"%s",fword))!=EOF)
    {
        if(strcmp(word,fword)==0)
        {
            printf("\n%s-word is found in the given file",word);
            break;
        }
    }
    fclose(fp);
}