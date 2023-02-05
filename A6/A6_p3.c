/*
    CH-230-A
    A6_p3
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

#define MIN(a,b,c) (( (a < b) & (a < c) ) ? (a) : ( (b < c) ? (b) : (c) ))
//Macro MIN works like an 'If - Else' function 
#define MAX(a,b,c) (( (a > b) & (a > c) ) ? (a) : ( (b > c) ? (b) : (c) ))
//Define Macro MAX with the same values than Macro MIN
#define MID_RANGE(a, b, c) ((MAX(a,b,c) + MIN(a,b,c)) /2)
//Calling MAX and MIN macro to get the Mid value

int main (){
    float n1, n2, n3;

    scanf ("%f", &n1);
    scanf ("%f", &n2);
    scanf ("%f", &n3);

    printf ("The mid-range is: %.6f\n", MID_RANGE(n1, n2, n3));
    //Call the MID_RANGE macro

    return 0;
}