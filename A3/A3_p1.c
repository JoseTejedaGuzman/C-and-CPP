/*
    CH-230-A
    A3_p1
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>

int main (){

    float x;
    int n, i = 0;

    scanf ("%f", &x);

    do {
        scanf ("%d", &n);
        if ( n <= 0)
        printf ("Input is invalid, reenter value\n");
    } 
    while (n <= 0);

    while (i < n){
        printf ("%f\n", x);
        i++;
    }

    return 0;
}