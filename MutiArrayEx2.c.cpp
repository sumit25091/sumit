#include<stdio.h>

int main()
{
	int m1[3][3], m2[3][3], m3[3][3];
	int r, c;

	
	printf("\n Enter 3*3 matrix1 :");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			scanf("%d",&m1[r][c]);
		}
	}
	
	printf("\n Enter 3*3 matrix2 :");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			scanf("%d",&m2[r][c]);
		}
	}
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			m3[r][c] = m1[r][c] + m2[r][c];
		}
	}


	printf("\n matrix addition = ");
	for(r=0;r<3;r++)
	{
		printf("\n");
		for(c=0;c<3;c++)
		{
			printf(" %d",m3[r][c]);
		}
	}

}
