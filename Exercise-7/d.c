// d. Count the number of account holders whose balance is less than the minimum
// balancecusing sequential access	file.

#include <stdio.h>
#include <stdlib.h>

int add_account()
{
    FILE *fp;
    char name[100], file_name[500];
    printf("\nEnter a file_name to write:");
    scanf("%s", file_name);
    fp = fopen(file_name, "a");
    if (fp == NULL)
    {
        printf("File-%s could not be opened", file_name);
        return -1;
    }
    int balance, account_num, n, i = 0;
    printf("Enter no of account wants to insert:");
    scanf("%d", &n);
    while (i < n)
    {
        printf("\nEnter Name,acoount number and balance:");
        scanf("%s %d %d", name, &account_num, &balance);
        fprintf(fp, "\n%s %d %d", name, account_num, balance);
        i++;
    }
    fclose(fp);
    return -1;
}

int count_min(int min_balance, int count)
{
    FILE *fp;
    char file_name[500], name[100];
    int balance, account_num;
    printf("Enter a file_name to read:");
    scanf("%s", file_name);
    fp = fopen(file_name, "r");
    if (fp == NULL)
    {
        printf("File-%s could not be opened", file_name);
        return -1;
    }
    printf("\nEnter a minimum balance:");
    scanf("%d", &min_balance);
    fp = fopen(file_name, "r");
    printf("\nGiven below account holders have less than minimum balance:");
    while ((fscanf(fp, "%s %d %d", name, &account_num, &balance)) != EOF)
    {
        if (balance < min_balance)
        {
            printf("\nName:%s Account number:%d Balance:%d  %d required to reach minimum balance",
                   name, account_num, balance, min_balance - balance);
            count++;
        }
    }
    printf("\nNo.of account holders whose balance less than %d are:%d", min_balance, count);
    fclose(fp);
    return -1;
}
int main()
{
    int min_balance, count = 0;
    int i = 1;
    while (i)
    {
        int choice;
        printf("\nMENU:\n1.Add Account\n2.Count min balance holders\n3.Exit");
        printf("\nEnter a choice(1/2/3):");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add_account();
            break;
        case 2:
            count_min(min_balance, count);
            break;
        case 3:
            i = 0;
            break;
        default:
            printf("INVALID INPUT");
        }
    }
}