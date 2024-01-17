#include<stdio.h>
int main()
{
	int i,n,j,k;
	printf("enter a number: ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		for(k=0;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}