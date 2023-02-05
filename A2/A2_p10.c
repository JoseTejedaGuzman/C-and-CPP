/*
    CH-230-A
    A2_p3
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>

int main (){

    int n, NumberOfHours, NumberOfDays = 1;

    do {
    printf ("select a number: ");
    scanf ("%d", &n);}
    while (n <= 0);
    //Use (Do - while) to repeat the action until the integer be positive

        while (NumberOfDays <= n){
            //The program will repeat the action until 'NumberOfDays' is equal to 'n'
            if (NumberOfDays == 1){ 
                //For singular word "Day" 
                NumberOfHours = NumberOfDays * 24;
                printf ("%d day = %d hours\n", NumberOfDays, NumberOfHours);
                NumberOfDays++;
            }
            else {
                //For plural word "Days"
                NumberOfHours = NumberOfDays * 24;
                printf ("%d days = %d hours\n", NumberOfDays, NumberOfHours);
                NumberOfDays++;}
    }


    return 0;
}