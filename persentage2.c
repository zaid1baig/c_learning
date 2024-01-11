#include<stdio.h>
void main()
{
	int urdu,kannada,english,maths,science,sscience;
	int total,average,percentage;
	printf("enter a number of six sabject: :-");
	scanf("%d%d%d%d%d%d",&urdu,&kannada,&english,&maths,&science,&sscience); 
	total=urdu+kannada+english+maths+science+sscience;
	average=total/6.0;
	percentage=(total/600.0)*100;
	
	printf("total marks=%.2d\n",total);
	printf("average marks=%.2d\n",average);
	printf("percentage=%.2d\n",percentage);
	
	return 0;
}