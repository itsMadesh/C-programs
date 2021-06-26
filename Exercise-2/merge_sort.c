//merge sort
#include<stdio.h>
int main()
{
    int a[10],b[10],n_a,n_b;
    printf("Enter  a limit of array-a:");
    scanf("%d", &n_a );
    printf("Enter  a limit of array-b:");
    scanf("%d", &n_b );
    for(int i=0;i<n_a;i++)
    {
        printf("a[%d]=",i);
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n_b;i++)
    {
        printf("b[%d]=",i);
        scanf("%d", &b[i]);
    }
    int c[n_a+n_b];
    for(int i=0;i<n_a;i++)
    {
        for(int j=i;j<n_a;j++)
        {
            if(a[i]>a[j])
            {
                int swap=a[i];
                a[i]=a[j];
                a[j]=swap;
            }

        }
    }
    for(int i=0;i<n_b;i++)
    {
        for(int j=i;j<n_b;j++)
        {
            if(b[i]>b[j])
            {
                int swap=b[i];
                b[i]=b[j];
                a[j]=swap;
            }
        }
    }
    int k=0;
    for(int i=0;i<n_b;i++)
    {
        for(int j=0;j<n_b;j++)
        {
            if(a[i]>b[j])
            {
                c[k++]=a[i];
            }
            else
            {
                c[k++]=b[j];
            }
        }
    }    
    for(int i=0;i<n_a+n_b;i++)
    {
        printf("%d\n", c[k]);
    }     

       
}