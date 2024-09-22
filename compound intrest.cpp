#include <stdio.h>
#include <math.h>  

int main() {
    double principal, rate, amount, compound_interest;
    int time, n;

    
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("The principal amount is: %.2lf\n", principal);


    printf("Enter time (in years): ");
    scanf("%d", &time);
    printf("The time is: %d years\n", time);

    
    printf("Enter annual interest rate (as a percentage): ");
    scanf("%lf", &rate);
    rate = rate / 100; 
    printf("The annual interest rate is: %.2lf%%\n", rate * 100);

    
    printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &n);

    
    amount = principal * pow((1 + rate / n), n * time);
    compound_interest = amount - principal;

    
    printf("The compound interest is: %.2lf\n", compound_interest);
    printf("The final amount after interest is: %.2lf\n", amount);

    return 0;
}

