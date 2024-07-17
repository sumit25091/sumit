#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *x;
	int n,i;
	
	printf("\n Enter size of array :");
	scanf("%d",&n);
	
	//"int*" is to convert void memory to type integer
	x=(int*)calloc(n,sizeof(int));
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter array value at memory address %u :",x);
		scanf("%d",x);
		
		x++;
	}
	for(i=0;i<n;i++)
	{
		printf("\n value at memory address %u = %d",x,*x);
		x++;
	}
	//destroy allocated memory address
	
	free(x);
	
}
