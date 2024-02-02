#include<stdio.h>
int add1(int a,int b);
void main()
{
	int a,b,c;
	printf("enetr  two number: ");
	scanf("%d%d",&a,&b);
	
	c=add1(a,b);
	printf("min=%d\n",c);
	
	c=add2(a,b);
	printf("min=%d\n",c);
	c=add3(a,b);
	printf("mal=%d\n",c);
	
	c=add4(a,b);
	printf("div=%d\n",c);
	
	c=add5(a,b);
	
	printf("mod=%d\n",c);
}
int add1(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int add2(int a, int b)
{
    int c;
    c = a - b;
    return c;
}

int add3(int a, int b)
{
    int c;
    c = a * b;
    return c;
}

int add4(int a, int b)
{
    int c;
    c = a / b;
    return c;
}

int add5(int a, int b)
{
    int c;
    c = a % b;
    return c;
}
