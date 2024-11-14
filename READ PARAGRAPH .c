#include <stdio.h>  
#include <stdlib.h>  

void readFromFile() {  
    FILE *file;  
    char ch;  

    file = fopen("C:\\Users\\clemoh\\OneDrive\\Desktop\\cfiles\\output.txt", "r"); // Open file for reading  
    if (file == NULL) {  
        perror("Error opening file for reading");  
        return;  
    }  

    printf("Content of output.txt:\n");  
    while ((ch = fgetc(file)) != EOF) {  
        putchar(ch); // Display each character  
    }  

    fclose(file); // Close the file  
}  

int main() {  
    readFromFile(); // Call the function  
    return 0;  
}
