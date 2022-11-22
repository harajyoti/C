// Write a program to swap two numbers using function (pass the pointers). in c. 



#include <stdio.h> 

void swap(int *a, int *b); 

int main() 
{ 
	int x, y; 
	
	print("Enter the value of x and y\n"); 
	scanf("%d%d", &x, &y); 
	
	print("Before Swapping\nx = %d\ny = %d\n", x, y); 
	
	swap(&x, &y); 
	
	print("After Swapping\nx = %d\ny = %d\n", x, y); 
	
	return 0; 
} 

void swap(int *a, int *b) 
{ 
	int temp; 
	
	temp = *b; 
	*b = *a; 
	*a = temp; 
}