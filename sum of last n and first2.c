#include<stdio.h>
int main()
{
	int num,sum=0,firstdigit,lastdigit;
	printf("enter any number to first and last number: ");
	scanf("%d",&num);
	printf("digit=%d\n",num);
	
	lastdigit=num%10;
	
	while(num>=10)
	{
		num=num /10;
	}
	firstdigit=num;
	
	sum=firstdigit+lastdigit;
	
	printf("sum of first and last digit=%d",sum);
}