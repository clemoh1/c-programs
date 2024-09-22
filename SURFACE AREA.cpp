#include<stdio.h>
#define PI 3.14159  

int main() {
    float radius, height, surfaceArea;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    surfaceArea = 2 * PI * radius * (radius + height);

    printf("The surface area of the cylinder is: %.2f\n", surfaceArea);

    return 0;
}

