/*WAP to find second minimum from array of 5 integer numbers*/

#include<stdio.h>

void main()
{
	int x[5] ={19,14,56,61,44},i;
	int min,pos;
	
	printf("\n Array values = ");
	for(i=0;i<=4;i++)
		printf(" %d",x[i]);
	
	min=x[0];  
	pos=0;
	for(i=1;i<=4;i++)
	{
		if(x[i]<min)
		{
			min = x[i];
			pos=i;
		}	
	}
	
	printf("\n Mi value = %d at index number %d",min,pos);
}
