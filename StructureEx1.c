/*WAP to create structure book and show two diff book detail*/

#include<stdio.h>
#include<string.h>

struct Book
{
	int id;
	char bookname[20];
	char author[20];
	float cost;
};

void main()
{
	struct Book b1;
	struct Book b2;
	
	b1.id =302;
	strcpy(b1.bookname,"HTML");
	strcpy(b1.author,"James");
	b1.cost = 450.00f;
	
	b2.id = 303;
	strcpy(b2.bookname,"css");
	strcpy(b2.author,"peter");
	b2.cost = 900.00f;
	
	printf("\n Book b1=%d \t %s \t %s \t %.2f",b1.id,b1.bookname,b1.author,b1.cost);
	
	printf("\n Book b2=%d \t %s \t %s \t %.2f",b2.id,b2.bookname,b2.author,b2.cost);
	

}
