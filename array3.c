/*WAP tosearch array value from array of 5 integers - Linear search Algorithm*/

#include<stdio.h>
void main()
{
	int x[5]={18,58,29,45,58};
	int i,value,count=0;
	
	printf("\n Enter any number to search :");
	scanf("%d",&value);
	
	for(i=0;i<4;i++)
	{
		if(x[i]=value)
		{
			count++;
		}
	}
	
	if(count==0)
	{
		printf("\n value not found:");
	}
	else
	{
		printf("\n value found for %d times",count);
	}
}
