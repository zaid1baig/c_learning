#include<stdio.h>
int main()
{
	long long num;
	int count=0;
	printf("enter a number");
	scanf("%d11d",&num);
	count = (num == 0) ? 1  : (log10(num) + 1);
	printf("total digite:%d",count);
}