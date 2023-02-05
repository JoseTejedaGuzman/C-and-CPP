/*
    CH-230-A
    A3_p5
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>

int main (){

    char c;
    int n, i;
    double array [100];
    double sum, average,SumToAverage = 0;

    printf ("Type a letter: ");
    scanf ("%c", &c);

    printf ("Type a number: ");
    scanf ("%d", &n);

    for (i = 0; i < n; i++){
    printf ("Type in Celcius: ");
    scanf ("%lf", &array [i]);}
    //'For' loop to type n values and allocate them in the array [i] 

    switch (c){
        case 's': 
        sum = 0;
        for (i = 0; i < n; i++){
        sum = sum + array [i];}
        //Sum the value 'array [i]' to one value before. This 'n' times
        printf ("%lf", sum);
        break;

        case 'p':
        printf ("The list of temperature\n");
        for (i = 0; i < n; i++){
        //Just print the 'n' values that you enter in the keyboard
        printf ("%lf\n", array [i]);}
        break;

        case 't':
        for (i = 0; i < n; i++){
        array [i] = (array [i] * 9)/5 + 32;
        //Use 'For' loop to convert each of the 'n' values in Fahrenheit
        printf ("%lf F\n", array[i]);}
        break;

        default:
        //'Default' for the rest letters and get the average of temperatures
        for (i = 0; i < n; i++){
        SumToAverage = SumToAverage + array [i];
        average = SumToAverage / n;}
        printf ("%lf", average);

        
    }

    return 0;
}