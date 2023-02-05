/*
    CH-230-A
    A3_p8
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>

float array [10];
//Global value that appear in all functions

float sum (float array []){

    float sum=0;
    int i;

    for (i = 0; i < 10; i++){
        sum = sum + array [i];}
        /*The spaces in the array that does not store someting
        would be 0, it does not matter in the sum. */

    return sum;
}

float average (float a[], int n){

    float average = 0;
    average = sum (a)/ (n);
    /*Use the function to get the sum and divide over
    the integer type */
    return average;
}

int main (){

    float a, b, m;
    int n;

    for (n = 0; n < 10;n++){
        printf ("Type a number: ");
        scanf ("%f", &m);
        //if you enter -99 the for loop stop by the break
        if (m == -99.0){
            break;}
        array [n] = m;
    }
    a = sum (array);
    b = average (array, n);
    //Call the results

    printf ("Sum: %f\n", a);
    printf ("Average: %f", b);

    return 0;
}

