#include<stdio.h>
int main()
{
	
	int a,b,c,tot;
	printf("enter a 3 number \n: ");
	scanf("%d%d%d",&a,&b,&c);
    
    tot=sum(a)+sum(b)+sum(c);
    printf("sum of =%d",tot);
	
}
int sum(int n)
{
	int i,sum=0;
	
	for(i=0;i<=n;i++)
{
	sum=sum+i;
}
return sum;
}