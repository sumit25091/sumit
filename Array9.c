/*WAP to input 5 integers in array x. arrange values in ascending order*/ 
#include<stdio.h>

void main()
{
	int x[5], i, j, t;
	
	printf("\n Enter 5 integer numbers :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&x[i]); //89 13 57 91 34
	}
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(x[i]>x[j])
			{
				t = x[i];
				x[i] = x[j];
				x[j] = t;
			}
		}
	}
	
	printf("\n array values in ascending order");
	for(i=0;i<5;i++)
	{
		printf(" %d",x[i]);
	}
}

