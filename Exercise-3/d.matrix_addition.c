/*d. To	input two matrices and perform matrix addition.*/	

#include <stdio.h>
int N;
int NUM;
void matrix_inputs(int m[N][N])
{
    NUM+=1;
    printf("Enter values in matrix m%d:\n",NUM);
    for (int i = 0; i <N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("m%d[%d][%d]=",NUM, i, j);
            scanf("%d", &m[i][j]);
        }
    }
}
void matrixAddition(int m1[N][N], int m2[N][N])
{
    printf("Addition of matrix m1 and m2:\n");
    int sum[N][N];
    for (int i = 0; i <N; i++)
    {
        for (int j = 0; j <N; j++)
        {
            sum[i][j] = m1[i][j] + m2[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter order of the matrix-1:");
    scanf("%d", &N);
    printf("Enter order of the matrix-2:");
    scanf("%d", &n);
    if(n==N)
    {
        int m1[N][N], m2[N][N];
        matrix_inputs(m1);
        matrix_inputs(m2);
        matrixAddition(m1, m2);
    }
    else
    {
        printf("matrix addition is not applicable for given order");  
    }    
}