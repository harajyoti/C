// coppy a string to another without using lib 

#include<stdio.h>
int main()
{

    char src[100], destn[100];
    int i, j; 
    i=j=0;
    printf("Input your string:");
    scanf("%[^\n]", src);

    while (src[i] != '\0')
    {
        destn[j] = src[i];
        i++;
        j++;
    
    }

    destn[j] = '\0';

    printf("The destn string stores : '%s'\n", destn);
    return 0;



}