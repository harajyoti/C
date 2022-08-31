#include<stdio.h>
int main()
{
    char ch;
    printf("Inpute a character : ");
    scanf("%c", &ch);

    switch(ch)
    {
    case 'a' : case 'e' : case 'i' : case 'o' : case 'u' : case 'A' : case 'E' : case 'I' : case 'O' : case'U':
        {
            printf("%c is vowel\n", ch);
            break;
        }
        default:
            printf("Invalid inpute trpe!!!\n");
    }
    return 0;



}