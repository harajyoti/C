#include<stdio.h>
int main()
{
    int i, j, len;
    char src[100] = "hello", dest[100] = "world";
    i = j = 0;
    while(dest[i] != '\0')
    i++;
    while(src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    printf("%s\n", dest);
    return 0;
}