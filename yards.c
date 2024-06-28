
#include <stdio.h>

int main() {
    double inches;
    double yards, feet, remaining_inches;

    // Input inches from the user
    printf("Enter length in inches: ");
    scanf("%lf", &inches);

    // Convert inches to yards, feet, and remaining inches
    yards = inches / 36.0;  // 1 yard = 36 inches
    feet = (inches / 12.0) - (yards * 3.0);  // 1 feet = 12 inches
    remaining_inches = inches - (yards * 36.0 + feet * 12.0);

    // Print the conversion result
    printf("%.2lf inches is %.2lf yards, %.2lf feet, and %.2lf inches\n", inches, yards, feet, remaining_inches);

    return 0;
}

