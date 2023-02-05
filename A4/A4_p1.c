/*
    CH-230-A
    A4_p1
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>
#include<math.h>

int main (){

    float Number, Lower, Upper, i;

   
    scanf ("%f", &Upper);
    scanf ("%f", &Lower);
    scanf ("%f", &Number);


    for (i = Upper; i <= Lower; i += Number){
        /*Assign to 'i' the lower value, every time a loop is complete  
        'i' would increase by the base size until 'i' equal to Upper value*/
        printf ("%f %f %f\n", i, i*i*M_PI, i*2*M_PI);
        // 'i' would be use directly in our operations
    }

    return 0;
}