#include <stdio.h>  

// Function to check if a number is even or odd  
void checkEvenOdd(int number) {  
    if (number % 2 == 0) {  
        printf("The number is even.\n"); // Output if the number is even  
    } else {  
        printf("The number is odd.\n");  // Output if the number is odd  
    }  
}  

int main() {  
    int num;  

    // Prompt the user for a number  
    printf("Enter a number: ");  
    scanf("%d", &num); // Read the number from user input  

    // Call the function to check if the number is even or odd  
    checkEvenOdd(num);  

    return 0;  
}
