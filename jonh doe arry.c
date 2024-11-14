#include <stdio.h>  
#include <string.h>  

// Define the structure named employee  
struct employee {  
    char name[25];       // Name (a string of 25 characters)  
    int id;             // ID (an integer)  
    char department[20]; // Department (a string of 20 characters)  
    float salary;       // Salary (a float)  
    char email[50];     // Email (a string of 50 characters)  
};  

int main() {  
    // Declare and initialize a variable of the employee structure  
    struct employee emp = {  
        "John Doe",             // Name  
        12345,                  // ID  
        "Human Resources",      // Department  
        55000.50,              // Salary  
        "john.doe@company.com"  // Email  
    };  

    // Print the values of the fields  
    printf("Employee Details:\n");  
    printf("Name: %s\n", emp.name);  
    printf("ID: %d\n", emp.id);  
    printf("Department: %s\n", emp.department);  
    printf("Salary: %.2f\n", emp.salary);  
    printf("Email: %s\n", emp.email);  

    return 0;  
}
