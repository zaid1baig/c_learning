#include<stdio.h>
#include<string.h>
struct bike
{
	char name[10];
	int mailage;
	float prize;
};
void main()
{
	struct bike b1;
	strcpy(b1.name,"bullet");
	b1.mailage=35;
	b1.prize=277777;
	
	printf("name=%s:\n",b1.name);
	printf("mailage=%d:\n",b1.mailage);
	printf("prize=%f:\n\n",b1.prize);
	
	struct bike b2;
	strcpy(b2.name,"ns");
	b2.mailage=18;
	b2.prize=250000;
	
	printf("name=%s:\n",b2.name);
	printf("mailage=%d:\n",b2.mailage);
	printf("prize=%f:\n\n",b2.prize);
	
	struct bike b3;
	strcpy(b1.name,"tvs");
	b1.mailage=35;
	b1.prize=22777;
	
	printf("name=%s:\n",b1.name);
	printf("mailage=%d:\n",b1.mailage);
	printf("prize=%f:\n\n",b1.prize);
}