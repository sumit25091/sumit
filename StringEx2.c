#include<stdio.h>
#include<string.h>

void main()
{
	char sample[100];
	int n;
	
	printf("\n Enter any string :");
	gets(sample);
	
	n=strlen(sample);
	printf("\n Total characters =%d",n);
	
	strupr(sample);
	printf("\n uppercase string=%s",sample);
	
	strlwr(sample);
	printf("\n lowercase string =%s",sample);
}
