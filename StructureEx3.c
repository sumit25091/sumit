#include<stdio.h>

struct Employee
{
	int id;
	char empname[20];
	double salary;
};

void main()
{
	struct Employee emp[5];
	int i,pos;
	double max;
	
	for(i=0;i<=4;i++)
	{
		printf("\n Enter employee id :");
		scanf("%d",&emp[i].id);
		
		printf("\n Enter name :");
		scanf("%s",&emp[i].empname);
		
		printf("\n Enter salary :");
		scanf("%lf",&emp[i].salary);
	}	
	
	printf("\n\n Employee details are,");
	for(i=0;i<=4;i++)
	{
		printf("\n %10d %20s %10.2lf",emp[i].id,emp[i].empname,emp[i].salary);
	}
	
	max = emp[0].salary;
	pos = 0;
	for(i=1;i<=4;i++)
	{
		if(emp[i].salary>max)
		{
			max = emp[i].salary;
			pos = i;
		}
	}
	
	printf("\n Employee %s erns more",emp[pos].empname);
	
}

