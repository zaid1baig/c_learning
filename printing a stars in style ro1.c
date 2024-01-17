#include<stdio.h>
int main()
{
	int i,n,j;
	printf("enter a number to print a star: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}