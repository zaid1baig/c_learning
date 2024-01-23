#include<stdio.h>
int main()
{
	int a[10],n,i;
	printf("enter a size of array of element: ");
	scanf("%d",&n);
	printf("enter a element\n");
	
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the array of element or\n");
	
	for(i=0;i<n;i++)
	{
		printf(" %d\n",a[i]);
	}
}