// c. Insert, update, delete and append phone details of an individual or a company into
// a telephone_directoryphone directory using random access file.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct telephone_directory
{
    char name[200];
    char num[11];
};
char filename[] = "Exercise-7/telephone_directory.dat";
char copy_filename[] = "Exercise-7/copy.dat";
void display()
{
    struct telephone_directory td;
    FILE *fp;
    fp = fopen(filename, "rb");
    printf("File content of %s :", filename);
    while (fread(&td, sizeof(td), 1, fp) == 1)
    {
        printf("\nName : %s, Number : %s", td.name, td.num);
    }
    printf("\nEOF");
    fclose(fp);
}
void insert()
{
    struct telephone_directory td;
    int n;
    printf("\nEnter no. of records:");
    scanf("%d", &n);
    FILE *fp;
    fp = fopen(filename, "ab+");
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter name:");
        scanf("%s", td.name);
        printf("\nEnter number: ");
        scanf("%s", td.num);
        fwrite(&td, sizeof(td), 1, fp);
    }
    fclose(fp);
}

void delete ()
{
    struct telephone_directory td;
    char x[100];
    FILE *fp;
    fp = fopen(filename, "rb+");
    FILE *copy;
    copy = fopen(copy_filename, "ab+");
    fseek(fp, 0, 0);
    printf("\nEnter name to be deleted:");
    scanf("%s", x);
    while (fread(&td, sizeof(td), 1, fp) == 1)
    {
        if (strcmp(x, td.name) == 0)
            continue;
        else
            fwrite(&td, sizeof(td), 1, copy);
    }
    fclose(fp);
    fclose(copy);
    remove(filename);
    rename(copy_filename, filename);
}
void update()
{
    struct telephone_directory td;
    char x[100];
    long int y;
    struct telephone_directory ob1;
    FILE *fp;
    fp = fopen(filename, "rb+");
    FILE *copy;
    copy = fopen(copy_filename, "ab+");
    printf("\nEnter name to update : ");
    scanf("%s", x);
    while (fread(&td, sizeof(td), 1, fp) == 1)
    {
        if (strcmp(x, td.name) == 0)
        {
            printf("\nEnter new details :\nEnter name : ");
            scanf("%s", ob1.name);
            printf("Enter number : ");
            scanf("%s", ob1.num);
            fwrite(&ob1, sizeof(ob1), 1, copy);
        }
        else
        {
            fwrite(&td, sizeof(td), 1, copy);
        }
    }
    fclose(fp);
    fclose(copy);
    remove(filename);
    rename(copy_filename, filename);
}
void append()
{
    struct telephone_directory td;
    int x;
    printf("Enter no. of records : ");
    scanf("%d", &x);
    FILE *fp;
    fp = fopen(filename, "ab+");
    fseek(fp, 0, SEEK_END);
    for (int i = 0; i < x; i++)
    {
        printf("\nEnter name : ");
        scanf("%s", td.name);
        printf("Enter number : ");
        scanf("%s", td.num);
        fwrite(&td, sizeof(td), 1, fp);
    }
    fclose(fp);
}
int main()
{
    int i = 1;
    while (i == 1)
    {
        int choice;
        printf("\nMENU\n1.Insert\n2.Update\n3.Delete\n4.Append\n5.Exit\n6.Display");
        printf("\nEnter a choice(1/2/3/4/5/6):");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            update();
            break;
        case 3:
            delete ();
            break;
        case 4:
            append();
            break;
        case 5:
            i = 0;
            break;
        case 6:
            display();
            break;
        default:
            printf("INVALID INPUT");
            break;
        }
    }
}