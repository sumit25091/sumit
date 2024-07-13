#include<stdio.h>
#include<string.h>

void main()
{
	char sample[20];
	
	printf("\n Enter string :");
	gets(sample);
	
	strrev(sample);
	
	printf("\n after reverse,sample string =%s",sample);
}
