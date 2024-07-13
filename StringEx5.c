#include<stdio.h>
#include<string.h>

void main()
{
	char s1[100],s2[100],t[100];
	
	printf("\n Enter string s1:");
	gets(s1);
	
	printf("\n Enter string s2:");
	gets(s2);
	
	printf("\n before swapping,s1 = %s  \t  s2=%s",s1,s2);
	
	strcpy(t,s1);
	strcpy(s1,s2);
	strcpy(s2,t);
	
	printf("\n after swapping,s1=%s  \t  s2=%s",s1,s2);
}
