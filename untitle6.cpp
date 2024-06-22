#include<stdio.h>
int main()
{
	int no1,no2,c;
	
	printf("\n Enter no1:");
	scanf("%d",&no1);
	
	printf("\n Enter no2:");
	scanf("%d",&no2);
	
	printf("\n Before swapping:no1=%d \t no2=%d",no1,no2);
	
	c=no1;
	no1=no2;
	no2=c;
	
	printf("\n After swapping:no1=%d \t no1=%d",no1,no2);
}
