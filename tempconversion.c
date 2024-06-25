//24 WAP to input the temperature in Fahrenheit and convert it into Celsius and vice
//versa.[centigrade=5*(fahrenheit-32)/9 : fahrenheit=(Centigrade*0.2) + 32 ]//

#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    int choice;

    printf("Temperature Conversion Menu:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Fahrenheit to Celsius conversion
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);

        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

        printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", fahrenheit, celsius);
    } else if (choice == 2) {
        // Celsius to Fahrenheit conversion
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);

        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

        printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", celsius, fahrenheit);
    } else {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}

