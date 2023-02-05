/*
    CH-230-A
    A3_p6
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>

float to_pounds (int kg, int g){
    float pounds_kg;
    float pounds_g;
    float to_pound;

    pounds_kg = kg * 2.2;
    pounds_g = g * .0022;

    to_pound = pounds_kg + pounds_g;

    return to_pound;
}

int main (){

    int x, y;

    scanf ("%d", &x);
    scanf ("%d", &y);

    printf ("Result of conversion: %f\n", to_pounds (x, y));

    return 0;
}