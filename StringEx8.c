#include<stdio.h>
#include<string.h>

void main()
{
    char sample[100]= " james Gosling is founder of java programming. james Gosling originally invented OAK language";
    char prefix[20];
    char ans[100];
    
    printf("\n Enter prefix :");
    gets(prefix);
    
    strcpy(ans, strstr(sample,prefix));
    
    printf("\n %s",ans);
}
