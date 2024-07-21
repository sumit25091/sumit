/*WAP to input rollno,student name,3subject marks.define function and show student details*/

#include<stdio.h>

void show(int r,char name[],float x,float y,float z);

void main()
{
	int rollno;
	char studname[20];
	float sub1,sub2,sub3;
	
	printf("\n Enter student roll no:");
	scanf("%d",&rollno);
	
	printf("\n Enter student name:");
	scanf("%s",&studname);
	
	printf("\n Enter marks scored in sub1,sub2,sub3:");
	scanf("%f%f%f",&sub1,&sub2,&sub3);
	
	show(rollno,studname,sub1,sub2,sub3);
}

void show(int r,char name[],float x,float y,float z)
{
	printf("\n roll number=%d",r);
	printf("\n student name=%s",name);
	printf("\n sub1=%.2f \t sub=%.2f \t sub=%.2f",x,y,z);
}
