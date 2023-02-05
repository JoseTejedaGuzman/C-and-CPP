/*
    CH-230-A
    A2_p3
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>

int main (){

    int x;

    scanf("%d", &x);

    if ((x % 2 == 0) && (x % 7 == 0)){
        printf ("The number is divisible by 2 and 7\n");
    }

    else {
        printf ("The number is NOT divisible by 2 and 7\n");
    }

    return 0;
}