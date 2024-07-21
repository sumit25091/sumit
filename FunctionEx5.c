#include<stdio.h>

void addition(int x[ ]);

void main()
{
	int arr[5]={5 , 3, 7, 4, 3};
	addition(arr);
}
void addition(int x[ ])
{
	int i,sum=0;
	for(i=0;i<5;i++)
	{
		printf("%d",x[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum + x[i];
	}
	printf("\n addition of array values = %d",sum);
}
