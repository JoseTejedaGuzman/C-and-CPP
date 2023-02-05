/*
    CH-230-A
    A2_p3
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>

int main (){

    char x;

    scanf ("%c", &x);

    if ((x >= 'a' && x<= 'z') || (x >= 'A' && x <= 'Z')){ 
    printf ("%c is a letter\n", x);}

    else 
        if (x >= 48 && x <= 57){
        printf ("%c is a digit\n", x);}

        else 
        printf ("%c is some other symbol\n", x);

    return 0;
}