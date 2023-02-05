/*
    CH-230-A
    A5_p4
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

void divby5(float arr[], int size){
//Divide each value over 5

    for (int i = 0; i < size; i++){
        arr [i] = arr [i] / 5;
    }
}

int main (){
    int n;
    float *array;

    printf ("Type a number: ");
    scanf ("%d", &n);

    array = (float*) malloc(sizeof(float)*n);
    //Dinamic memory allocation depending of the integer 'n'

    for (int i = 0; i < n; i++){
        printf ("Type number part of the array: ");
        scanf ("%f", &array[i]);
        //Allocate each value of the array
    } 

    printf ("Before: \n");

    for (int i = 0; i< n; i++){
        printf ("%f\n", array[i]);
        //Print the array before the division
    }

    divby5(array, n);
    //Call the function to modify the value of the array

    for (int i = 0; i< n; i++){
        printf ("%f\n", array[i]);
    //Print the values that were already modified
    }

    return 0;
}