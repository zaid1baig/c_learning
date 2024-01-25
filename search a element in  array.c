#include<stdio.h>
int main()
{
	int a[10],n,i,ele,found;
	printf("enter a size of array: ");
	scanf("%d",&n);
	printf("enetr a alement of array: ");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter a element that you are searching: ");
	scanf("%d",&ele);
	
	{
		found=0;
		
		for(i=0;i<n;i++)
		{
			if(a[i]==ele)
			{
				found=1;
				break;
			}
		}
		if(found==1)
		{
			printf("\n %d element found  ",ele);
		}
		else
		{
			printf("\n element are not found",ele);
		}
	}
}