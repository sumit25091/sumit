//22 WAP to input a number.if the number is even,print its square otherwise print its cube. 
#include <stdio.h>

int main() 
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) 
	{
        int square = num * num;
        printf("Square of %d is: %d\n", num, square);
    } else {
        
        int cube = num * num * num;
        printf("Cube of %d is: %d\n", num, cube);
    }
    
    return 0;
}

