#include<stdio.h>
int main()
{
    float f,c;
    printf("input fahrenheit");
    scanf("%f", &f);
    c = 5.0/9.0 *(f-32);
    printf("\n Convert temp is = %6.2f", c);
    return 0;


}