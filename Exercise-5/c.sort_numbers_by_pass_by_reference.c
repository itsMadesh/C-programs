/*c. Sort	the	list	of	numbers	using	pass	by	reference.*/

#include<stdio.h>
void array_sort(int a[],int n)
{
	int i,j,swap;
  for(i=0;i<n-1;i++)
	{
		 for(j=i+1;j<n;j++)
		 {
			 	if(a[i]>a[j])
				{
						swap=a[i];
						a[i]=a[j];
						a[j]=swap; 
				}
		 }
	}
}
int main()
{
  int n;
  printf("Enter a length of an array:");
  scanf("%d",&n);
  int a[n];
  printf("Enter values  for array:\n");
  for(int i=0;i<n;i++)
  {
			printf("a[%d]=",i);
      scanf("%d",&a[i]);
  }
  array_sort(a,n);
  printf("Sorted array:"); 
  for(int i=0;i<n;i++)
  {
	printf("%d\t",a[i]);
  }    
}