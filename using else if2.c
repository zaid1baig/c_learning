#include<stdio.h>
int main()
{
	int a;
	printf("enter a number\n ");
	scanf("%d",&a);
	
	if(a>40)
	   printf("%d a is greter the 40 ",a);
	else if(a<40)
	    printf("%d a is less then 40",a);
	else if(a==40)
	    printf("%d a equle to 40",a);
}