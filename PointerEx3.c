#include<stdio.h>
int main()
{
	int a,b,ans;
	int *p1,*p2;
	
	a=99;
	b=99%999;
	
	p1=&a;
	p2=p1;
	
	ans=*p1+10 - 10+*p2;
	
	printf("\n\n a=%d \t b=%d \t *p1=%d \t *p2=%d \t ans=%d",a,b,*p1,*p2,ans);
}
