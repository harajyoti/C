#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter two number \n");
    scanf("%d%d", &a,&b);
    printf("Befor swap :a=%d, b=%d", a,b);

        c=a;
        a=b;
        b=c;
    printf("after swap : a=%d, b=%d",a,b);
    return 0;

}