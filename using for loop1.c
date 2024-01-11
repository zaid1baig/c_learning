#include<stdio.h>
int main()
{
	int i,n;
	printf("enter any number: ");
	scanf("%d",&n);
	printf("natural number for 1 to %d:\n",n);
	
	for (i=1; i<=n;i++)
	{
		printf("%d\n",i);
	}
}