#include<stdio.h>
void main()
{
	int num,reverse=0;
	printf("enter any number to find reverse number");
	scanf("%d",&num);
	
	while(num!=0){
	
		reverse=(reverse*10)+(num%10);
		num/=10;
	}
			printf("reverse=%d",reverse);
	
}