/*
    CH-230-A
    A5_p2
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>

void divby5(float arr[], int size){

    for (int i = 0; i < size; i++){
        arr [i] = arr [i] / 5;
    }
}

int main (){

    float array [] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    int n = 6;

    printf ("Before:\n");
    for (int i = 0; i < n; i++){
        //Prints 'n' elements in the main function before the divition
        printf ("%.3f ", array [i]);
        //%.3f to print only 3 decimals
    }
    printf ("\nAfter:\n");
    divby5 (array, n);
    for (int i = 0; i < n; i++){
        //Prints 'n' elements in the main function after the divition
        printf ("%.3f ", array [i]);}
    //Call the function to print inside the main ()
    printf ("\n");

    return 0;
}