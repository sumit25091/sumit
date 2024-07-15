#include<stdio.h>

int main()
{
	int a,b,ans;
	int *p1,*p2;
	
	a=1;
	b=10;
	
	p1=&a;
	p2=&b;
	
	ans=a+*p1 / *p2 + b;
	
	printf("\n\n a=%d\t b=%d\t *p1=%d \t *p2=%d \t ans=%d",a,b,*p1,*p2,ans);
}
