#include<stdio.h>
#include<stdlib.h>
void main()
{
	int*x;
	int n,i;
	
	printf("\n Enter size of array:");
	scanf("%d",&n);
	
	x=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter array at memory address %u:",x);
		
		scanf("%d",x);
		x++;
	}
	x=x-n;
	for(i=0;i<n;i++)
	{
		printf("\n value at memory address %u=%d",x,*x);
		x++;
	}
	free(x);
}
