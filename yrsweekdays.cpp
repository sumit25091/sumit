//10

#include <stdio.h>

int main() {
    int days;
    int years, weeks, remaining_days;
    
    // Getting input from user
    printf("Enter number of days: ");
    scanf("%d", &days);
    
    // Converting days into years, weeks, and remaining days
    years = days / 365;
    weeks = (days % 365) / 7;
    remaining_days = days - (years * 365) - (weeks * 7);
    
    // Displaying the results
    printf("%d days is equal to:\n", days);
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", remaining_days);
    
    return 0;
}

