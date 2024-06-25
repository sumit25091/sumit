//6 WAP to input width and height of a rectangle and calculate the area and perimeter.//

#include <stdio.h>

int main() 
{
    float width, height;
    float area, perimeter;
    
    // Getting input from user
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    printf("Enter the height of the rectangle: ");
    scanf("%f", &height);
    
    // Calculating area and perimeter
    area = width * height;
    perimeter = 2 * (width + height);
    
    // Displaying the results
    printf("Area of the rectangle: %.2f square units\n", area);
    printf("Perimeter of the rectangle: %.2f units\n", perimeter);
    
    return 0;
}

