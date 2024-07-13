#include<stdio.h>
#include<string.h>

void main()
{
	char fname[20],mname[20],lname[20];
	char fullname[60];
	
	printf("\n Enter first name :");
	gets(fname);
	
	printf("\n Enter middle name :");
	gets(mname);
	
	printf("\n Enter last name :");
	gets(lname);
	
	strcpy(fullname,fname);
	strcat(fullname,"  ");
	strcat(fullname,mname);
	strcat(fullname,"  ");
	strcat(fullname,lname);
	strcat(fullname,"  ");
	
	printf("\n fullname=%s",fullname);
}
