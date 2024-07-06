#include<stdio.h>
	int main()

{
	int n1,n2;
	
	printf("\n Enter value for n1:");
	scanf("%d",&n1);
	
	printf("\n Enter value for n2:");
	scanf("%d",&n2);
	
	if(n1<-128 || n2>127 || n2<-128 || n1>127)
	{
	printf("\n Invalid input.");
    }
     int start = n1<n2 ? n1:n2;
     int end = n1<n2 ? n2:n1;
     
     printf("value \t Ascii character \n");
     
     for(int i= start;i<=end;i++)
     {
     	printf("%d %c",i,(char)i);
	 }
     
}
