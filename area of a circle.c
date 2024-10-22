#include <stdio.h>
#include <math.h>

void calculate_circle_area() {
    double radius, area;

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle: ");
    if (scanf("%lf", &radius) != 1) {
        printf("Invalid input! Please enter a numeric value for the radius.\n");
        return;
    }

    if (radius < 0) {
        printf("Radius cannot be negative. Please enter a positive value.\n");
        return;
    }

    // Calculate the area using the formula: A = pr²
    area = M_PI * radius * radius;

    // Display the result
    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);
}

int main() {
    calculate_circle_area();
    return 0;
}
