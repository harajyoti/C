// coppy a string to another without using lib 


#include<stdio.h>
#include<string.h>
int main()
{

    char src[100], destn[100] = "";
    int i, j; 
    printf("Input your string:");
    scanf("%[^\n]", src);

   printf("The destn string before coping : '%s'\n", destn);
    // coppy each src[]
    strcpy(destn, src);

    printf("The destn string stores : '%s' \n", destn);
    return 0;



}