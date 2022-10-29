//write a program to convert the vowels in an inpute string 

// error in this  program 

#include<stdio.h>
int main ()
{
    int i, c=0;
    char str[100];
    printf("Input a string : ");
    scanf("%[^\n]", str);

    i=0;
    while (str[i] !='\0')
    {
        switch (str[i])
        {
        case 'a': case 'A': case 'e': case 'E': case 'i': case 'I': case 'o': case 'O': case 'U': case 'u': c++ ;
            break;
        }
        i++;
    }
    
    printf("vowel count: %d\n", c);
    return 0;
}