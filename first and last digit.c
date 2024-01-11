#include<stdio.h>
int main()
{
	int n,lastdigit;
	printf("enter any number: ");
	scanf("%d",&n);
	printf("first digit=%d",n);
	
	lastdigit=n%10;
	printf("last digit=%d",lastdigit);
}