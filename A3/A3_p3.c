/*
    CH-230-A
    A3_p3
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>

float convert (int cm){

    float km = 0;
    km = cm * 0.00001;

    return km;
}

int main (){

    int x;

    scanf ("%d", &x);
    convert (x);
    printf ("Result of conversion: %f\n", convert(x));


    return 0;
}