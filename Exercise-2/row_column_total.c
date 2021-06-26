#include <stdio.h>
int main()
{
    int r, c,row=0,col=0;
    printf("Enter a row of a matrix:");
    scanf("%d", &r);
    printf("Enter a column of a matrix:");
    scanf("%d", &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter a value in a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",  a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            row=row+a[j][i];
            col=col+a[i][j];
        }
        
    }
    printf("row totals:%d", row);
    printf("column totals:%d", col);
}