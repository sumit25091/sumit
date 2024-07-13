#include<stdio.h>
#include<string.h>

void main()
{
	char sample[100]="Dennis Ritchie is founder of c programming";
	char ans[100];
	int n;
	
	printf("\n %s",sample);
	
	printf("\n Enter how many first n characters to copy? :");
	scanf("%d",&n);
	
	strncpy(ans , sample, n);
	ans[n] = NULL;
	
	printf("\n %s",ans);
 
}
