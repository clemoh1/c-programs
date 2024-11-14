#include <stdio.h>  
#include <stdlib.h>  

#define MAX_LEN 201  // Maximum length for the paragraph (200 + 1 for null terminator)  

void appendToFile() {  
    FILE *file;  
    char additionalParagraph[MAX_LEN];  

    printf("Enter an additional paragraph (up to 200 characters): ");  
    fgets(additionalParagraph, MAX_LEN, stdin); // Read additional input from user  

    file = fopen("C:\\Users\\clemoh\\OneDrive\\Desktop\\cfiles\\output.txt", "a"); // Open file for appending  
    if (file == NULL) {  
        perror("Error opening file for appending");  
        return;  
    }  

    fprintf(file, "%s", additionalParagraph); // Append paragraph to file  
    fclose(file); // Close the file  
}  

int main() {  
    appendToFile(); // Call the function  
    return 0;  
}
