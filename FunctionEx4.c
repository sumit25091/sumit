/*WAP to input two numbers.perform swapping using function*/

#include<stdio.h>

void swap(int*x,int*y);

void main()
{
	int a,b;
	
	printf("\n Enter value of a:");
	scanf("%d",&a);
	
	printf("\n Enter value of b:");
	scanf("%d",&b);
	
	swap(&a,&b);
	
	printf("\n value of a = %d and value of b=%d",a,b);
}
void swap(int*x,int*y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
