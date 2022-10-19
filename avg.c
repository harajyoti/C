
// Write a program to find out minimum, maximum, sum and average of n numbers without
//  using array. 


#include<stdio.h>  
  
int main()  
{  
    int num, count, sum = 0;  
    float avg = 0.0, limit;  
  
    printf("Enter the limit\n");  
    scanf("%f", &limit);  
  
    printf("Enter %f numbers\n", limit);  
    for(count = 1; count <= limit; count++)  
    {  
        scanf("%d", &num);  
        sum = sum + num;  
    }  
    avg = sum / limit;  
  
    printf("Sum = %d\nAverage = %0.2f\n", sum, avg);  
  
    return 0;  
} 