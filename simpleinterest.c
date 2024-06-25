//9

#include <stdio.h>

int main() {
    float principle, rate, time;
    float simple_interest, total_amount;
    
    // Getting input from user
    printf("Enter principle amount: ");
    scanf("%f", &principle);
    printf("Enter rate of interest (per annum): ");
    scanf("%f", &rate);
    printf("Enter time period (in years): ");
    scanf("%f", &time);
    
    // Calculating simple interest
    simple_interest = (principle * rate * time) / 100.0;
    
    // Calculating total amount
    total_amount = principle + simple_interest;
    
    // Displaying the results
    printf("\nSimple Interest = %.2f\n", simple_interest);
    printf("Total Amount = %.2f\n", total_amount);
    
    return 0;
}

