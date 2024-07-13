#include<stdio.h>
#include<string.h>

void main()
{
	char s1[100],s2[100];
	int n;
	
	printf("\n Enter string s1 :");
	gets(s1);
	
	printf("\n Enter string s2 :");
	gets(s2);
	
	n=strcmp(s1,s2);
	printf("\n n =%d",n);
	
	if(n==0)
	{
		printf("\n Strings are equal");
	}
	else
	{
		printf("\n Strings are distinct");
	}
}
