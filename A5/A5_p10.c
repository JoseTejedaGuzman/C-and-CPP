/*
    CH-230-A
    A5_p10
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int printing (int x){
    int value;

    if (x == 1){
        printf ("%d ", x);
        return 1;}
        //The function is finished

    else {
       value = x;
       printf ("%d, ", value);
       //Print the value of x
       printing (x -1);
       //Recursive function, but this time the number is decrease by 1
       return value;
    }
}

int main (){

    int n;

    printf ("Type a number: ");
    scanf ("%d", &n);

    printing (n);
    //Call the function

    return 0;
}