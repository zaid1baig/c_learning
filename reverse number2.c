#include<stdio.h>
int main()
{
	int number,rev=0,remainder;
	printf("\nenter a number");
	scanf("%d",&number);
	printf("\n reversed number: ");
	while(number!= 0)
	{
		remainder=number%10;
		rev=rev*10+remainder;
		number/=10;
	}
	printf("%d",rev);
}