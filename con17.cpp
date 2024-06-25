//17 WAP to input inches from the user and convert it into yards, feet .
//[Inch=inch*0.027 yards, inch=0.083 feet]//

#include <stdio.h>

int main() 
{
    float inches, yards, feet;
    
    // Getting input from user
    printf("Enter length in inches: ");
    scanf("%f", &inches);
    
    // Converting inches to yards and feet
    yards = inches * 0.027;
    feet = inches * 0.083;
    
    // Displaying the results
    printf("%.2f inches is equal to %.4f yards\n", inches, yards);
    printf("%.2f inches is equal to %.4f feet\n", inches, feet);
    
    return 0;
}

