// f.check if the contents of the two file are same 

#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp1,*fp2;
    char str1[100],str2[100];
    int flag =0;
    fp1=fopen("C-Assignments/f1.txt","r");
    fp2=fopen("C-Assignments/f2.txt","r");
    while((fscanf(fp1,"%s",str1))!=EOF && (fscanf(fp2,"%s",str2))!=EOF)
    {
        if(strcmp(str1,str2)!=0)
        {
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        printf("Two file contents are same");
    }
    else{
        printf("Two file contents are not same");
    }
    fclose(fp1);
    fclose(fp2);
}