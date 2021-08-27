// binary search

#include <stdio.h>

int binarySearch(int a[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (a[mid] == x)
            return mid;
        if (a[mid] > x)
            return binarySearch(a, l, mid - 1, x);
        return binarySearch(a, mid + 1, r, x);
    }

    return -1;
}
  
int main(void)
{
    int n;
    printf("Enter no of integers:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter elememt in index a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int swap=a[i];
                a[i]=a[j];
                a[j]=swap;
            }
        }
    }
    printf("sorted array:");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    int x;
    printf("Enter element to search:");
    scanf("%d",&x);
    int result = binarySearch(a, 0, n - 1, x);
    (result == -1) ? printf("\nElement is not present in aay")
                   : printf("\nElement is present at index %d",
                            result);
    return 0;
}