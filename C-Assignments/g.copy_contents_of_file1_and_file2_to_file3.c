// g.Copy the contents of two file to another file.


#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1, *fp2, *fp3, *a;
    char c;
    fp1 = fopen("C-Assignments/g1.txt", "r");
    fp2 = fopen("C-Assignments/g2.txt", "r");
    fp3 = fopen("C-Assignments/g3.txt", "w");
    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        puts("Could not open files");
        exit(0);
    }

    // Copy contents of first file to g3.txt
    while ((c = fgetc(fp1)) != EOF)
        fputc(c, fp3);

    // Copy contents of second file to g3.txt
    while ((c = fgetc(fp2)) != EOF)
        fputc(c, fp3);

    printf("Merged file-g1 and file-g2 into file-g3");

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
