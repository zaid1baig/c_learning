
#include<stdio.h>
int main()
{
	char a;
	printf("enter a charecter: ");
	scanf("%c",&a);
	
	switch(a){
		case 'a':
		case 'i':
		case 'e':
		case 'u':
		case 'o':
		{
			printf("it is a vowle\n");
	        break;
		}
		default:
			{
				printf("it is not a vowle\n");
			}
	}
	
}