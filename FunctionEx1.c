/* WAP to show greeting message"Hello world" using function*/

#include<stdio.h>

void sayHello();

void main()
{
	sayHello();
	sayHello();
	sayHello();
	
	display("welcome");
	display("deesha");
		
}
    void sayHello()
     {
     	printf("\n Hello world");
     	
	 }
	 void display(char msg[])
	 {
	 	printf("\n message =%s",msg);
	 }
