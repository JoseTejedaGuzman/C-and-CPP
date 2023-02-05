/*
    CH-230-A
    A6_p1
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#define CHANGE(A, B, type) {type Swapp=A; A=B; B=Swapp;}
//Defining the macro and the Swapp process


int main (){

    int a, b;
    double c, d;

    scanf ("%d", &a);
    scanf ("%d", &b);

    scanf ("%lf", &c);
    scanf ("%lf", &d);
    //Allocate the values

    printf ("After swapping:\n");

    CHANGE (a, b, int);
    //Using the macro with the int values
    printf ("%d\n", a);
    printf ("%d\n", b);

    CHANGE (c, d, double);
    //Using the macro with the double values
    printf ("%lf\n", c);
    printf ("%lf\n", d); 

    return 0;
}