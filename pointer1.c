#include<stdio.h>
int main ()
{
    /*
    *POINTERS: are use to store addres of another variable of same type as that of the point.
    *pointer dcl-> <data-type> *<pointer-variable-name>;
    *pointer init-> <pointer-variable-name> &<variable-name-to-store>
    */

   int a,*iptr;
   a= 5; //normal var a holds value 5
   iptr = &a; //ptr init 
   printf("Normal var stores:%d at a location:0x%X\n", a, &a);
   printf("Pointer var store:0x%X at a location:0x%X\n", iptr, &iptr);
   printf("Pointer var store:0x%X at a location:0x%X\n", iptr); //ptr arithmatic
   printf("Normal var stores:%d at a location:0x%X\n", a, &a);

    return 0;

}