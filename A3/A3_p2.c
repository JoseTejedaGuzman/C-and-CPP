/*
    CH-230-A
    A3_p2
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>

int main (){

    char ch;
    int n, i = -1;

    printf ("Type a letter: ");
    scanf ("%c", &ch);

    printf ("Type a number: ");
    scanf ("%d", &n);

    n = n * -1;
    //Multiply by one to make the integer a negative number

    printf ("%c, ", ch);

    while (n <= i){
    //(-n) is the parameter. The loop stops when 'i' less than the parameter
        if (n == i)
        printf ("%c%d", ch, i);
 
        else 
        printf ("%c%d, ", ch, i);
        i--;
        //Decrease i by one every time a loop is complete
    }


    return 0;
}