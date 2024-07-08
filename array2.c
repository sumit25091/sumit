/* WAP to input 5 integers each of exact 3 digits and store them in arary. */

#include<stdio.h>
void main()
{
	int x[5]={101,102,103,154,195};
	int add_5, add_4,add_3, add_2, add_1,i;
	
	add_1=(x[0]/100)+(x[0]/10)%10+(x[0]%10);
	printf("\n addtion. for 1st value :%d",add_1);
	
	add_2=(x[1]/100)+(x[1]/10)%10+(x[1]%10);
	printf("\n addition.for 2nd value :%d",add_2);
	
	add_3=(x[2]/100)+(x[2]/10)%10+(x[2]%10);
	printf("\n addition. for 3rd value :%d",add_3);
	
	add_4=(x[3]/100)+(x[3]/10)%10+(x[3]%10);
	printf("\n addition. for 4th value :%d",add_4);
	
	add_5=(x[4]/100)+(x[4]/10)%10+(x[4]%10);
	printf("\n addition. for 5th value :%d",add_5);
	
	if(add_1>10)
	 {
	 	printf("\n 1st value true");
	 }
	if(add_2>10)
	 {
	 	printf("\n 2nd value true");
	 }
	if(add_3>10)
	 {
	 	printf("\n 3rd value true");
	 }
	if(add_4>10)
	 {
	 	printf("\n 4th value true");
	 }
	if(add_5>10)
	 {
	 	printf("\n 5th value true");
	 }
	 else
	 printf("\n Condition Not Satisfied");

}
   
  
