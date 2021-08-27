//e.Count the occurrence of a given word in a given file.


#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp=fopen("C-Assignments/c.txt","r");
    char word[100],fword[100];
    printf("\nEnter a word for search in the file:");
    scanf("%s",word);
    int found=0;
    while((fscanf(fp,"%s",fword))!=EOF)
    {
        if(strcmp(word,fword)==0)
        {
            found++;
        }
    }
    fclose(fp);
    printf("\n%s-word %d times found in given file", word,found);
}