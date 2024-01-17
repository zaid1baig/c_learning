#include<stdio.h>
void main()
{
	int a,b,n,c;
	printf("enter any two  number: ");
	scanf("%d%d",&a,&b);
	printf("enter 1 for sum\n2for sub\n3 for mal\n");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:{
			c=a+b;
			printf("sum=%d",c);
			break;
		}
		case 2:{
			c=a-b;
			printf("sub=%d",c);
			break;
		}
		case 3:{
			c=a*b;
			printf("mal=%d",c);
			break;
		}
		default:{
			printf("invalid ");
			break;
		}
	}
}