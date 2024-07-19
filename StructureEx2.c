#include<stdio.h>

struct student
{
	int rollNo;
	char studName[20];
	float marks;
};

void main()
{
	struct student s1;
	struct student s2;
	
	printf("\n Enter student roll no:");
	scanf("%d",&s1.rollNo);
	
	printf("\n Enter student name : ");
	scanf("%s",&s1.studName);
	
	printf("\n Enter marks :");
	scanf("%f",&s1.marks);
	
	
	printf("\n Enter student roll no:");
	scanf("%d",&s2.rollNo);
	
	printf("\n Enter student name : ");
	scanf("%s",&s2.studName);
	
	printf("\n Enter marks :");
	scanf("%f",&s2.marks);
	
	if(s1.marks >s2.marks)
	{
		printf("\n student %s scored more",s1.studName);
	}
	else
	{
		printf("\n student %s scored more",s2.studName);
	}
}
