//5 WAP to input radius and calculate the area and circumference of a circle.//

#include <stdio.h>

#define PI 3.14159265359

int main() {
    float radius;
    float area, circumference;
    
    // Getting input from user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    // Calculating area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    
    // Displaying the results
    printf("Area of the circle: %.4f square units\n", area);
    printf("Circumference of the circle: %.4f units\n", circumference);
    
    return 0;
}

