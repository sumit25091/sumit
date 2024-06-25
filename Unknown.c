//21

#include <stdio.h>

#define PI 3.14159265359

int main() {
    int choice;
    float radius, area, circumference;
    
    // Getting input choice from user
    printf("Enter your choice:\n");
    printf("1. Calculate area of circle\n");
    printf("2. Calculate circumference of circle\n");
    scanf("%d", &choice);
    
    // Checking the choice and performing calculations
    switch (choice) {
        case 1:
            // Area calculation
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("Area of the circle with radius %.2f is: %.4f\n", radius, area);
            break;
        case 2:
            // Circumference calculation
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            circumference = 2 * PI * radius;
            printf("Circumference of the circle with radius %.2f is: %.4f\n", radius, circumference);
            break;
        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
            break;
    }
    
    return 0;
}

