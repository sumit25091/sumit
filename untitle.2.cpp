#include<stdio.h>
int main()
{
	int roll_no;
	char name[20];
	int maths,sci,eng,civics,hist,total,avg;
	
	printf("\n Enter roll no:");
	scanf("%d",&roll_no);
	
	printf("\n Enter student name:");
	scanf("%s",&name);
	
	printf("\n Enter marks scored in maths:");
	scanf("%d",&maths);
	
	printf("\n Enter marks scored in sci:");
	scanf("%d",&sci);
	
	printf("\n Enter marks scored in english:");
	scanf("%d",&eng);
	
	printf("\n Enter marks scored in civics:");
	scanf("%d",&civics);
	
	printf("\n Enter marks scored in history:");
	scanf("%d",&hist);
	
	total=maths+sci+eng+civics+hist;
	printf("\n Total marks=%d",total);
	
	avg=maths+sci+eng+civics+hist;
	printf("\n Avg marks=%d,avg");
	
}

