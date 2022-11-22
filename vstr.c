// Write a program to count the number of vowels in a string

#include <stdio.h>
#include <string.h>
 
int main()
{
    char string[100];
    int i, length, count = 0;
 
    printf("Enter a string\n");
    scanf("%s", string);
 
    length = strlen(string);
 
    for (i = 0; i < length; i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' ||
            string[i] == 'o' || string[i] == 'u' || string[i] == 'A' ||
            string[i] == 'E' || string[i] == 'I' || string[i] == 'O' ||
            string[i] == 'U')
        {
            count++;
        }
    }
 
    printf("Number of vowels: %d\n", count);
 
    return 0;
}