/*
    CH-230-A
    A2_p3
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>

int main (){

    int a;

    scanf ("%d", &a);
    printf ("%d\n", a);

    int *ptr_a;
    ptr_a = &a;
    //Declare and initialize the pointer

    printf ("Adress of %p\n", ptr_a);

    *ptr_a = *ptr_a + 5;
    //Increase integer value through pointer 

    printf ("Value of %d\n", *ptr_a);
    printf ("Adress of %p\n", &a);

    return 0;
}