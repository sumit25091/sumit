#include<stdio.h>
#include<stdlib.h>

void main()
{
	int*x;
	int n,i;
	
	printf("\n Enter size of array :");
	scanf("%d",&n);
	
	//"int*" is to convert void memory to type integer
	x=(int*)malloc(sizeof(int)*n);
	
	printf("\n Enter %d array values :",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("\n Array values are :");
	for(i=0;i<n;i++)
	{
		printf("%d",x[i]);
	}
}
