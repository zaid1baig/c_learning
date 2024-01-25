#include<stdio.h>
int main()
{
	int a[100],freq[100];
	int size,i,j,count;
	printf("enter asize of array: ");
	scanf("%d",&size);
	
	printf("enter a element of array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		freq[i]=-1;
	}
	for(i=0;i<size;i++);
	{
		count= 1;
		for(j=i+1;j<size;j++)
		{
			if(a[i]=a[j])
			{
				count++;
				
				freq[i]= 0;
			}
	}
	if(freq[i]!=0)
	{
		freq[i]= count;
	}
	
	}
		printf("\n frequncy of all elewmentof array:\n");
		for(i=0;i<size;i++)
		{
			if(freq[i]!=0)
			{
				
				printf("%d %d>>time\n",a[i],freq[i]);
			}
		}
		
	} 