/*
    CH-230-A
    A4_p1
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>

int main (){

    char string [50];
    int i, a;

    fgets (string, sizeof(string), stdin);
    a = strlen (string);
    
    
    for (i = 0; i < (a-1); i++){
        if (i % 2 == 0)
        printf ("%c\n", string[i]);

        else 
        printf (" %c\n", string[i]);}


    return 0;
}