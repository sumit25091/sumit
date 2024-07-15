#include<stdio.h>
int main()
{
	int a,b,ans;
	int *p1,*p2;
	
	a=-5;
	b=+5;
	
	p1=&a;
	p2=&b;
	
	(*p1)+=(*p2);
	b+=(*p1);
	
	ans=b - b*(*p2) + (*p1)++;
	
	printf("\n\n a=%d \t b=%d \t *p1=%d \t *p2=%d \t ans=%d",a,b,*p1,*p2,ans);
}
