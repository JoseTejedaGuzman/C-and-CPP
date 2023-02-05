/*
    CH-230-A
    A2_p3
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>

int main (){

    float a, b, h;
    float square, rectangle, triangle, trapezoid;

    scanf ("%f %f %f", &a, &b, &h);

    square = a * a;
    rectangle = a * b;
    triangle = (a * h)/2;
    trapezoid = ((a + b) * h) /2;

    printf ("square area=%f\n", square);
    printf ("rectangle area=%f\n", rectangle);
    printf ("triangle area=%f\n", triangle);
    printf ("trapezoid area=%f\n", trapezoid);

    return 0;
}
