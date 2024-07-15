#include<stdio.h>
int main()
{
	int a,b,ans;
	int *p1,*p2;
	
     a=8;
     b=a;
     
     p1=&a;
     p2=&b;
     
     p2=p1;
     p1=p2;
     ans = (*p1)++ - --(*p2);
     printf("\n\n a = %d \t b = %d \t *p1=%d \t *p2=%d \t ans = %d",a,b,*p1,*p2,ans);
// 8 8 8 8 2

	
}
