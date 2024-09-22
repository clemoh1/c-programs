// program to calculate area of a rectangle 2 numbers (variables/data types)
#include<stdio.h> //scanf() , printf()

int main(){
	int a, b, area; // declaration of variables
	
	printf("enter the length: ");
	scanf("%d",&a);
	
	printf("enter the width: ");
	scanf("%d",&b);
	
	area = a*b;
	
	printf("the area of %d and %d is %d\n", a, b, area);
	
	return 0;
}
