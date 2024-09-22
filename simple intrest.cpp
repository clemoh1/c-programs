#include <stdio.h>

int main() {
    double amount, rate, simple_interest;
    int time;

    // Prompt for amount
    printf("Enter the amount: ");
    scanf("%lf", &amount);
    printf("The amount is: %.2lf\n", amount);

    // Prompt for time
    printf("Enter time (in years): ");
    scanf("%d", &time);
    printf("The time is: %d years\n", time);

    // Prompt for rate
    printf("Enter rate (as a percentage): ");
    scanf("%lf", &rate);
    printf("The rate is: %.2lf%%\n", rate);

    // Calculate simple interest
    simple_interest = (amount * time * rate) / 100;

    // Display the simple interest
    printf("The simple interest is: %.2lf\n", simple_interest);

    return 0;
}

