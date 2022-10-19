#include<stdio.h>
int main (){
    float f, c;
    printf("Input temprature in celsius : ");
    scanf("%f", &c);
    f = (c*9/5)+32;
    printf("\nTemperature in Fahrenheit : %2f",f);
    return 0;

}