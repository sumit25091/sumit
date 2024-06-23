#include <stdio.h>
#include <math.h>

// Function to calculate the area of a triangle using Heron's formula
double calculate_area_of_triangle(double a, double b, double c) {
    // Calculate semi-perimeter
    double s = (a + b + c) / 2.0;
    
    // Calculate the area using Heron's formula
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    return area;
}

int main() {
    double side_a, side_b, side_c;
    
    // Input lengths of sides of the triangle
    printf("Enter the length of side a: ");
    scanf("%lf", &side_a);
    printf("Enter the length of side b: ");
    scanf("%lf", &side_b);
    printf("Enter the length of side c: ");
    scanf("%lf", &side_c);
    
    // Calculate the area of the triangle
    double area = calculate_area_of_triangle(side_a, side_b, side_c);
    
    // Output the area of the triangle
    printf("The area of the triangle with sides %.2lf, %.2lf, %.2lf is %.2lf\n", side_a, side_b, side_c, area);
    
    return 0;
}

