/*
    CH-230-A
    A2_p3
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>

int main (){

    double x, y;

    scanf("%lf %lf", &x, &y);
    double *ptr_one, *ptr_two, *ptr_three;

    ptr_one = &x;
    ptr_two = &x;
    ptr_three =&y;
    //Initilize pointers
    printf ("Adress of %p\n", ptr_one);
    printf ("Adress of %p\n", ptr_two);
    printf ("Adress of %p\n", ptr_three);
    //Print memory adress of the three pointers

    return 0;
}