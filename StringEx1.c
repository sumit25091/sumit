#include<stdio.h>
void main()
{
	char username[40];
	
	printf("\n Enter username:");
	scanf("%s",&username);
	
	printf("\n username is %s",username);
	
	fflush(stdin);
	
	printf("\n Enter username :");
	gets(username);
	
	printf("\n username is %s",username);
}
