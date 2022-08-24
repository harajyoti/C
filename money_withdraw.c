#include<stdio.h>
int main ();
{
    char a[100];
    int b;
    printf("Enter Your bank ID or Name\n");
    scanf("%s", a);
    printf("%s, you have only 10000 amount in balance\n", a);
    printf("Enter The Amount You Want To withdraw \n");
    scanf("%d", &b);

    if (b<=9500)

    {
        printf("withdraw Done");
    }
    else{
        printf("Insufficent Balance")
    }
    return 0;


}