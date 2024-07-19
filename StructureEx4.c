#include<stdio.h>

struct product
{
	char prodName[20];
	float cost;
};

void main()
{
	struct product p[3];
	int i;
	float total=0.0f;
	
	for(i=0;i<=3;i++)
	
	{
		printf("\n Enter product Name:");
		scanf("%s",&p[i].prodName);
		
		printf("\n Enter product cost:");
		scanf("%f",&p[i].cost);
	}
	for(i=0;i<=3;i++)
	{
		printf("\n %20s %10.2f",p[i].prodName,p[i].cost);
	}
	for(i=0;i<=3;i++)
	{
		total= total + p[i].cost;
	}
	printf("\n Grand Total = Rs.%.2f",total);
}
